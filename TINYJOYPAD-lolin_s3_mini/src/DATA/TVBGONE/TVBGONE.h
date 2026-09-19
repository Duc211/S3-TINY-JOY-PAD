// TV-B-GONE module for MEGA Compilation
// Uses the IR code database supplied in DATA/TVBGONE/IR_CODES.h.
// OLED UI is drawn directly into the project's 128x64 (1024 byte) buffer.
// LEFT = Start, RIGHT = Stop, UP = Reset, DOWN = Exit.

#include <Arduino.h>
#include "config.h"
#include "IR_CODES-505.h"       // 505 mã IR
//#include "IR_CODES-863.h"     // 863 mã IR 
//#include "IR_CODES-1517.h"    // 1517 mã IR

#define Frame_Rate_TVBGONE 30 

static bool TVBGONE_RUNNING = false;
static uint16_t TVBGONE_INDEX = 0;
static uint32_t TVBGONE_SENT = 0;
static uint32_t TVBGONE_LAST_DRAW = 0;

static inline uint8_t tvbgoneGetIndex(const IrCode *code, uint16_t pairIndex) {
  const uint8_t bits = code->bitcompression;
  const uint16_t bitPos = (uint16_t)pairIndex * bits;
  const uint16_t bytePos = bitPos >> 3;
  const uint8_t bitOffset = bitPos & 7;
  uint16_t value = (uint16_t)code->codes[bytePos] << 8;
  value |= code->codes[bytePos + 1];
  value >>= (16 - bits - bitOffset);
  return (uint8_t)(value & ((1U << bits) - 1U));
}

static void tvbgoneCarrier(uint32_t usec, uint16_t halfPeriodUs) {
  if (halfPeriodUs == 0) halfPeriodUs = 13;
  uint32_t start = micros();
  while ((uint32_t)(micros() - start) < usec) {
    digitalWrite(IRLED, HIGH);
    delayMicroseconds(halfPeriodUs);
    digitalWrite(IRLED, LOW);
    delayMicroseconds(halfPeriodUs);
  }
  digitalWrite(IRLED, LOW);
}

static void tvbgoneSpace(uint32_t usec) {
  digitalWrite(IRLED, LOW);
  if (usec) delayMicroseconds(usec);
}

static void tvbgoneSendCode(const IrCode *code) {
  if (!code) return;

  const uint16_t carrierHz = (uint16_t)code->timer_val * 1000U;
  uint16_t halfPeriodUs = 13;
  if (carrierHz > 0) {
    halfPeriodUs = (uint16_t)(500000UL / carrierHz);
    if (halfPeriodUs == 0) halfPeriodUs = 1;
  }

  for (uint16_t i = 0; i < code->numpairs; i++) {
    if (TINYJOYPAD_RIGHT == 0) {
      TVBGONE_RUNNING = false;
      digitalWrite(IRLED, LOW);
      return;
    }

    const uint8_t index = tvbgoneGetIndex(code, i);
    const uint32_t mark = (uint32_t)code->times[(uint16_t)index * 2U] * 10UL;
    const uint32_t space = (uint32_t)code->times[(uint16_t)index * 2U + 1U] * 10UL;

    if (code->timer_val) tvbgoneCarrier(mark, halfPeriodUs);
    else tvbgoneSpace(mark);
    tvbgoneSpace(space);
  }

  digitalWrite(IRLED, LOW);
}

// -----------------------------------------------------------------------------
// Minimal 5x7 font. Stored as columns, matching the SSD1306 buffer layout used
// by this project: buffer[x + page*128].
// -----------------------------------------------------------------------------
static const uint8_t tvbgoneFont[] = {
  // 0-9
  0x3E,0x51,0x49,0x45,0x3E,  0x00,0x42,0x7F,0x40,0x00,
  0x62,0x51,0x49,0x49,0x46,  0x22,0x41,0x49,0x49,0x36,
  0x18,0x14,0x12,0x7F,0x10,  0x2F,0x49,0x49,0x49,0x31,
  0x3E,0x49,0x49,0x49,0x32,  0x01,0x71,0x09,0x05,0x03,
  0x36,0x49,0x49,0x49,0x36,  0x26,0x49,0x49,0x49,0x3E,
  // A-Z
  0x7E,0x11,0x11,0x11,0x7E,  0x7F,0x49,0x49,0x49,0x36,
  0x3E,0x41,0x41,0x41,0x22,  0x7F,0x41,0x41,0x22,0x1C,
  0x7F,0x49,0x49,0x49,0x41,  0x7F,0x09,0x09,0x09,0x01,
  0x3E,0x41,0x49,0x49,0x7A,  0x7F,0x08,0x08,0x08,0x7F,
  0x00,0x41,0x7F,0x41,0x00,  0x20,0x40,0x41,0x3F,0x01,
  0x7F,0x08,0x14,0x22,0x41,  0x7F,0x40,0x40,0x40,0x40,
  0x7F,0x02,0x0C,0x02,0x7F, 0x7F,0x04,0x08,0x10,0x7F,
  0x3E,0x41,0x41,0x41,0x3E,  0x7F,0x09,0x09,0x09,0x06,
  0x3E,0x41,0x51,0x21,0x5E, 0x7F,0x09,0x19,0x29,0x46,
  0x46,0x49,0x49,0x49,0x31,  0x01,0x01,0x7F,0x01,0x01,
  0x3F,0x40,0x40,0x40,0x3F, 0x1F,0x20,0x40,0x20,0x1F,
  0x3F,0x40,0x38,0x40,0x3F, 0x63,0x14,0x08,0x14,0x63,
  0x07,0x08,0x70,0x08,0x07, 0x61,0x51,0x49,0x45,0x43
};

static void tvbgoneClearBuffer() {
  for (uint16_t i = 0; i < 1024; i++) display.buffer[i] = 0x00;
}

static void tvbgonePixel(uint8_t x, uint8_t y, bool on = true) {
  if (x >= 128 || y >= 64) return;
  const uint16_t p = (uint16_t)x + ((uint16_t)(y >> 3) * 128U);
  const uint8_t mask = (uint8_t)(1U << (y & 7));
  if (on) display.buffer[p] |= mask;
  else display.buffer[p] &= (uint8_t)~mask;
}

static void tvbgoneHLine(uint8_t x0, uint8_t x1, uint8_t y) {
  if (x0 > x1) { uint8_t t = x0; x0 = x1; x1 = t; }
  for (uint8_t x = x0; x <= x1; x++) tvbgonePixel(x, y);
}

static void tvbgoneRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, bool fill) {
  if (!w || !h) return;
  if (fill) {
    for (uint8_t yy = y; yy < (uint8_t)(y + h) && yy < 64; yy++)
      for (uint8_t xx = x; xx < (uint8_t)(x + w) && xx < 128; xx++)
        tvbgonePixel(xx, yy);
  } else {
    tvbgoneHLine(x, (uint8_t)(x + w - 1), y);
    tvbgoneHLine(x, (uint8_t)(x + w - 1), (uint8_t)(y + h - 1));
    for (uint8_t yy = y; yy < (uint8_t)(y + h); yy++) {
      tvbgonePixel(x, yy);
      tvbgonePixel((uint8_t)(x + w - 1), yy);
    }
  }
}

static void tvbgoneChar(char c, uint8_t x, uint8_t y) {
  uint16_t base;
  if (c >= '0' && c <= '9') base = (uint16_t)(c - '0') * 5U;
  else if (c >= 'A' && c <= 'Z') base = 50U + (uint16_t)(c - 'A') * 5U;
  else return;

  for (uint8_t col = 0; col < 5; col++) {
    const uint8_t bits = tvbgoneFont[base + col];
    for (uint8_t row = 0; row < 7; row++) {
      if (bits & (1U << row)) tvbgonePixel((uint8_t)(x + col), (uint8_t)(y + row));
    }
  }
}

static void tvbgoneText(const char *s, uint8_t x, uint8_t y) {
  while (*s && x < 123) {
    tvbgoneChar(*s++, x, y);
    x = (uint8_t)(x + 6);
  }
}

static void tvbgoneNumber(uint16_t value, uint8_t x, uint8_t y, uint8_t digits) {
  char buf[6];
  if (digits > 5) digits = 5;
  for (int8_t i = (int8_t)digits - 1; i >= 0; i--) {
    buf[i] = (char)('0' + (value % 10));
    value /= 10;
  }
  buf[digits] = '\0';
  tvbgoneText(buf, x, y);
}

static void drawTVBGONEUI() {
  tvbgoneClearBuffer();

  // Header: clean 1-pixel separator and title.
  tvbgoneText("TV-B-GONE", 30, 1);
  tvbgoneHLine(0, 127, 10);

  // Status box.
  tvbgoneRect(2, 14, 124, 15, false);
  if (TVBGONE_RUNNING) {
    tvbgoneText("RUN", 8, 18);
    tvbgoneRect(108, 18, 10, 7, true);
  } else {
    tvbgoneText("STOP", 8, 18);
    tvbgoneRect(108, 18, 10, 7, false);
  }

  // Current code / total.
  tvbgoneText("CODE", 4, 33);
  tvbgoneNumber((uint16_t)(TVBGONE_INDEX + (TVBGONE_INDEX < num_NAcodes ? 1 : 0)), 34, 33, 3);
  tvbgoneText("/", 54, 33);
  tvbgoneNumber((uint16_t)num_NAcodes, 62, 33, 3);

  // Percentage.
  uint8_t pct = num_NAcodes ? (uint8_t)((TVBGONE_INDEX * 100UL) / (uint32_t)num_NAcodes) : 0;
  if (pct > 100) pct = 100;
  tvbgoneNumber(pct, 104, 33, 3);
  tvbgoneText("%", 122, 33);

  // 116x9 progress bar. Pixel coordinates are used instead of treating
  // page indices as Y coordinates, fixing the scrambled/shifted graphics.
  tvbgoneRect(6, 45, 116, 10, false);
  const uint8_t fill = (uint8_t)((uint32_t)110U * TVBGONE_INDEX / (uint32_t)(num_NAcodes ? num_NAcodes : 1));
  if (fill) tvbgoneRect(9, 48, fill, 4, true);

  tvbgoneText("U:RES", 1, 57);
  tvbgoneText("L:STA", 43, 57);
  tvbgoneText("R:STO", 85, 57);

  display.display();
}

static void tvbgoneResetProgress() {
  TVBGONE_RUNNING = false;
  TVBGONE_INDEX = 0;
  TVBGONE_SENT = 0;
  TVBGONE_LAST_DRAW = millis();
  digitalWrite(IRLED, LOW);
  drawTVBGONEUI();
}

void setupTVBGONE(void) {
  pinMode(IRLED, OUTPUT);
  digitalWrite(IRLED, LOW);
  TVBGONE_RUNNING = false;
  TVBGONE_INDEX = 0;
  TVBGONE_SENT = 0;
  TVBGONE_LAST_DRAW = 0;
}

void loop_TVBGONE(void) {
  setupTVBGONE();
  drawTVBGONEUI();

  while (BUTTON_DOWN) delay(10);

  while (1) {
    if (TINYJOYPAD_LEFT == 0 && !TVBGONE_RUNNING) {
      delay(180);
      while (TINYJOYPAD_LEFT == 0) delay(10);
      TVBGONE_RUNNING = true;
      drawTVBGONEUI();
    }

    if (TINYJOYPAD_RIGHT == 0 && TVBGONE_RUNNING) {
      delay(180);
      while (TINYJOYPAD_RIGHT == 0) delay(10);
      TVBGONE_RUNNING = false;
      digitalWrite(IRLED, LOW);
      drawTVBGONEUI();
    }

    // UP = reset progress, but only while TV-B-Gone is stopped.
    if (!TVBGONE_RUNNING && TINYJOYPAD_UP == 0) {
      delay(180);
      while (TINYJOYPAD_UP == 0) delay(10);
      tvbgoneResetProgress();
      continue;
    }

    if (!TVBGONE_RUNNING && TINYJOYPAD_DOWN == 0) {
      delay(180);
      while (TINYJOYPAD_DOWN == 0) delay(10);
      digitalWrite(IRLED, LOW);
      return;
    }

    if (TVBGONE_RUNNING) {
      if (TVBGONE_INDEX >= num_NAcodes) {
        // Finished: show 100% briefly, then automatically reset to 0.
        TVBGONE_RUNNING = false;
        digitalWrite(IRLED, LOW);
        drawTVBGONEUI();
        delay(700);
        tvbgoneResetProgress();
        continue;
      }

      const uint16_t shuffled = naShuffledIndex(TVBGONE_INDEX);
      tvbgoneSendCode(NApowerCodes[shuffled]);

      if (!TVBGONE_RUNNING) {
        drawTVBGONEUI();
        continue;
      }

      TVBGONE_SENT++;
      TVBGONE_INDEX++;

      uint32_t now = millis();
      if ((uint32_t)(now - TVBGONE_LAST_DRAW) >= Frame_Rate_TVBGONE) {
        TVBGONE_LAST_DRAW = now;
        drawTVBGONEUI();
      }
      delay(8);
    } else {
      delay(10);
    }
  }
}
