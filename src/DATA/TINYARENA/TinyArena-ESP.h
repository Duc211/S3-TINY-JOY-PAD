//       >>>>>  T-I-N-Y  A-R-E-N-A for ESP8285/ESP8266 GPL v3 <<<<<
//                    Programmer: Daniel C 2026
//             Contact EMAIL: electro_l.i.b@tinyjoypad.com
//  https://github.com/phoenixbozo/TinyJoypad/tree/main/TinyJoypad
//                    https://WWW.TINYJOYPAD.COM
//          https://sites.google.com/view/arduino-collection

//  tiny-Arena is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// Reference in file "COPYING.txt".
// -__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-


// The tiny-Arena source code include commands referencing to librairy 
// Arduboy2 who is not include in the source code.

// Reference in file "Arduboy2_library_LICENSE.txt".
// https://github.com/MLXXXp/Arduboy2

// A HEX file is provided with the source code which includes
// compiled code from the Arduboy2 library.
// Reference in the file "Arduboy2_library_LICENSE.txt".

#include <pgmspace.h>

inline void BobPosMove(void) ;
inline bool isWall(int x, int y) ;
inline bool checkCollision(float px_, float py_) ;
void updateTentacles(void) ;
inline void drawSprite2Bit(int8_t x0, int8_t y0, const uint8_t* sprite) ;
void drawWorldSprites() ;
inline void VBuf(int x, int y) ;
void renderRaycast() ;
void shoot() ;
static inline uint8_t SliceByte(uint8_t page, uint8_t data) ;
void Tiny_Flip() ;
void INIT_NEW_GAME_TARENA(void);
void loop_TARENA() ;

// -------------------------------------------------
// GLOBAL VARIABLES
// -------------------------------------------------
uint8_t BobPos;
uint8_t SkipAnim;
uint8_t VBuffer[4][64] = {0};


#define FRAME_CONTROL_TARENA while((currentMillis-MemMillis)<45){currentMillis=millis();}MemMillis=currentMillis
#define FRAME_CONTROL_TARENA2 while((currentMillis-MemMillis)<8){currentMillis=millis();}MemMillis=currentMillis


// Shooting
uint8_t bulletActive;
uint8_t bulletSize;
int8_t  bulletX;
int8_t  bulletY;

// Player
float posX, posY;
float dirX, dirY;
float planeX, planeY;
const float PLAYER_SIZE = 0.08f;
// Wall distances per column (used for sprite depth comparison)
uint8_t wallDist[64];

// Player health
uint8_t playerHealth = 0;
uint8_t damageCooldown;

// Kill counter to progressively speed up enemies
uint8_t killCount = 0 ;

// -------------------------------------------------
// SPRITES
// -------------------------------------------------
const uint8_t Gun[] PROGMEM = {
  14,15,
  0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xC0,0x98,0xA4,0xAA,0x24,0x98,0x00,0x40,0x20,0x50,0x28,0x54,0x27,
  0x5F,0x5F,0x2F,0x0F,0x07,0x03,0x05,0x00,

  0x00,0x00,0x00,0x00,0xC0,0x70,0x18,0x3C,0x66,0x5B,0x55,0xDB,0x66,0xFC,0x30,0x58,0x2C,0x56,0x2B,0x58,
  0x20,0x20,0x50,0x70,0x18,0x0C,0x0A,0x07,
};

const uint8_t face[] PROGMEM = {
  17,16,
  0x00,0xCE,0xF4,0x38,0x7C,0xFC,0xC4,0x90,0xA8,0x90,0xC4,0xA8,0x50,0x20,0x84,0x0E,0x00,
  0x00,0x03,0x0F,0x1E,0x38,0x33,0x60,0x79,0x63,0x79,0x60,0x33,0x38,0x14,0x0A,0x00,0x00,
  0xDF,0x31,0x0B,0xC6,0x82,0x02,0x3B,0x6F,0x57,0x6F,0x3B,0x56,0xAE,0xDE,0x7B,0xF1,0xDF,
  0x03,0x0C,0x30,0x21,0x47,0x4C,0x9F,0x86,0x9C,0x86,0x9F,0x4C,0x47,0x2B,0x35,0x0F,0x03
};

const uint8_t start[] PROGMEM = { //26
  0x46,0x49,0x49,0x31,0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x7E,0x09,0x09,0x7E,0x00,0x7F,0x19,0x29,0x46,0x00,0x01,0x01,0x7F,0x01,0x01,
};

const uint8_t BOB[] PROGMEM = {
  5,2,6,1,7,0,8,0,9,1,10,2,9,3,8,4,7,4,6,3,
  5,2,4,1,3,0,2,0,1,1,0,2,1,3,2,4,3,4,4,3,
};

// -------------------------------------------------
// MAP
// -------------------------------------------------
const uint8_t Lvl1[9][9] PROGMEM = {
  1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,0,0,
  1,0,1,1,1,1,1,1,0,
  1,0,0,0,0,1,0,0,0,
  1,1,1,1,0,1,0,1,0,
  1,0,0,0,0,1,0,0,0,
  1,0,0,1,0,1,1,1,0,
  1,1,1,1,0,0,0,0,0,
  1,0,0,0,0,1,1,0,0,
};

// -------------------------------------------------
// ENEMIES
// -------------------------------------------------
typedef struct {
  float x, y;
  uint8_t active;
  uint8_t health;
} WorldSprite;

// Original spawn positions saved in PROGMEM to save RAM
const float spawnX[] PROGMEM = {1.0f, 6.0f, 7.0f};
const float spawnY[] PROGMEM = {6.0f, 5.0f, 1.0f};

WorldSprite worldSprites[] = {
  {1.0f, 6.0f, 1, 5},
  {6.0f, 5.0f, 1, 5},
  {7.0f, 1.0f, 1, 5},
};
#define NUM_SPRITES 3

struct SpriteOrder { float dist; uint8_t index; };

// -------------------------------------------------
// UTILITY FUNCTIONS
// -------------------------------------------------
inline void BobPosMove(void) {
  SkipAnim ? SkipAnim-- : (BobPos = (BobPos < 18) ? BobPos + 1 : 0, SkipAnim = 1);
}

inline bool isWall(int x, int y) {
  if (x < 0 || x >= 10 || y < 0 || y >= 10) return true;
  return pgm_read_byte(&Lvl1[y][x]) == 1;
}

inline bool checkCollision(float px_, float py_) {
  float l = px_ - PLAYER_SIZE, r = px_ + PLAYER_SIZE;
  float t = py_ - PLAYER_SIZE, b = py_ + PLAYER_SIZE;
  return isWall((int)l, (int)t) || isWall((int)r, (int)t) ||
         isWall((int)l, (int)b) || isWall((int)r, (int)b);
}

// -------------------------------------------------
// ENEMY AI (tentacles) + PLAYER DAMAGE (dynamic speed)
// -------------------------------------------------
void updateTentacles(void) {
  damageCooldown = (damageCooldown > 0) ? damageCooldown - 1 : damageCooldown;

  // Speed increases with kill count (0.018 → max ~0.108)
  float speed = 0.018f + (killCount * 0.003f);
  speed = (speed > 0.108f) ? 0.108f : speed;

  for (uint8_t i = 0; i < NUM_SPRITES; i++) {
    if (!worldSprites[i].active) continue;

    float dx = worldSprites[i].x - posX;
    float dy = worldSprites[i].y - posY;
    float distSq = dx*dx + dy*dy;

    if (distSq < 0.09f && damageCooldown == 0 && playerHealth > 0) {
      playerHealth--;
      damageCooldown = 60;
      Sound(10, 22);
      if (playerHealth == 0) for (uint8_t t=220; t>3; t--) {Sound(t, 2);}
    }

    if (distSq < 256.0f && distSq > 0.01f) {
      float newX = worldSprites[i].x - dx * speed;
      float newY = worldSprites[i].y - dy * speed;

      int ix = (int)newX;
      int iy = (int)newY;

      if (ix >= 0 && ix < 10 && iy >= 0 && iy < 10) {
        if (pgm_read_byte(&Lvl1[iy][ix]) != 1) {
          worldSprites[i].x = newX;
          worldSprites[i].y = newY;
        }
      }
    }
  }
}

// -------------------------------------------------
// 2-BIT SPRITE DRAWING (Gun)
// -------------------------------------------------
inline void drawSprite2Bit(int8_t x0, int8_t y0, const uint8_t* sprite) {
  uint8_t w  = pgm_read_byte(sprite++);
  uint8_t h  = pgm_read_byte(sprite++);
  const uint8_t* white = sprite;
  const uint8_t* black = sprite + (uint16_t)w * ((h + 7) >> 3);

  if (x0 >= 64 || y0 >= 32 || x0 + w <= 0 || y0 + h <= 0) return;

  uint8_t pages = (h + 7) >> 3;
  for (int8_t x = 0; x < w; x++) {
    int8_t sx = x0 + x;
    if (sx < 0 || sx >= 64) continue;
    for (uint8_t p = 0; p < pages; p++) {
      uint16_t offset = (uint16_t)x + (uint16_t)p * w;
      uint8_t wb = pgm_read_byte(white + offset);
      uint8_t bb = pgm_read_byte(black + offset);
      if (!wb && !bb) continue;
      uint8_t baseY = p << 3;
      uint8_t maxBit = (h - baseY > 8) ? 8 : h - baseY;
      for (uint8_t bit = 0; bit < maxBit; bit++) {
        uint8_t mask = 1 << bit;
        int8_t sy = y0 + baseY + bit;
        if (sy < 0 || sy >= 32) continue;
        if (bb & mask)      VBuffer[sy >> 3][sx] &= ~(1 << (sy & 7));
        else if (wb & mask) VBuffer[sy >> 3][sx] |=  (1 << (sy & 7));
      }
    }
  }
}

// -------------------------------------------------
// 3D SPRITE DRAWING (enemies)
// -------------------------------------------------
SpriteOrder order[NUM_SPRITES];

void drawWorldSprites() {
  uint8_t numActive = 0;

  for (uint8_t i = 0; i < NUM_SPRITES; i++) {
    if (!worldSprites[i].active) continue;
    float dx = worldSprites[i].x - posX;
    float dy = worldSprites[i].y - posY;
    order[numActive].dist = dx*dx + dy*dy;
    order[numActive].index = i;
    numActive++;
  }

  // Sort sprites by distance (farthest first)
  for (uint8_t i = 0; i < numActive; i++)
    for (uint8_t j = i+1; j < numActive; j++)
      if (order[i].dist < order[j].dist) {
        SpriteOrder tmp = order[i];
        order[i] = order[j];
        order[j] = tmp;
      }

  float det = planeX * dirY - dirX * planeY;
  float invDet = (det != 0.0f) ? 1.0f / det : 100.0f;
  if (fabsf(invDet) > 100.0f) invDet = (invDet > 0) ? 100.0f : -100.0f;

  for (uint8_t s = 0; s < numActive; s++) {
    uint8_t i = order[s].index;

    float dx = worldSprites[i].x - posX;
    float dy = worldSprites[i].y - posY;

    float transformX = invDet * (dirY * dx - dirX * dy);
    float transformY = invDet * (-planeY * dx + planeX * dy);

    if (transformY < 0.1f) continue;

    int screenX = (int)(32.5f + transformX * (32.0f / transformY));

    uint8_t spriteDist8 = (transformY > 5.1f) ? 255 : (uint8_t)(transformY * 50.0f);

    uint8_t sprW = pgm_read_byte(face);
    uint8_t sprH = pgm_read_byte(face + 1);
    float scale = 1.0f / transformY;
    int w = (int)(sprW * scale);
    int h = (int)(sprH * scale);
    if (w < 1 || h < 1) continue;

    int drawX1 = max(0, screenX - w/2);
    int drawX2 = min(64, screenX + w/2);
    if (drawX1 >= 64 || drawX2 <= 0) continue;

    int drawY1 = max(0, 16 - h/2);
    int drawY2 = min(32, 16 + h/2);

    for (int stripe = drawX1; stripe < drawX2; stripe++) {
      if (spriteDist8 >= wallDist[stripe]) continue;

      int texX = ((stripe - (screenX - w/2)) * (int)sprW) / w;
      for (int y = drawY1; y < drawY2; y++) {
        int d = (y - 16) * 256 / h + 128;
        int texY = (d * (int)sprH) >> 8;
        if (texY < 0 || texY >= sprH) continue;

        uint16_t offset = (uint16_t)texX + (uint16_t)(texY >> 3) * sprW;
        uint8_t mask = 1 << (texY & 7);
        uint8_t whiteByte = pgm_read_byte(face + 2 + offset);
        uint8_t blackByte = pgm_read_byte(face + 2 + ((sprH + 7) >> 3) * sprW + offset);

        uint8_t page = y >> 3;
        uint8_t bit  = y & 7;
        if (blackByte & mask) VBuffer[page][stripe] &= ~(1 << bit);
        else if (whiteByte & mask) VBuffer[page][stripe] |= (1 << bit);
      }
    }
  }
}

// -------------------------------------------------
// RAYCASTING + RENDERING
// -------------------------------------------------
inline void VBuf(int x, int y) {
  VBuffer[y >> 3][x] &= ~(1 << (y & 7));
}

void renderRaycast() {
  const float moveSpeed = 0.085f;

  // Rotation with left/right buttons
  if ((!TINYJOYPAD_LEFT) || (!TINYJOYPAD_RIGHT)) {
    float ang = !TINYJOYPAD_LEFT ? -0.07f : 0.07f;

    float s = ang;
    float c = 1.0f - ang * ang * 0.5f;

    float tmp = dirX * c - dirY * s;
    dirY = dirX * s + dirY * c;
    dirX = tmp;

    tmp = planeX * c - planeY * s;
    planeY = planeX * s + planeY * c;
    planeX = tmp;
  }

  // Forward / backward movement
  float move_X = 0, move_Y = 0;
  if (!TINYJOYPAD_UP)    { move_X = dirX * moveSpeed; move_Y = dirY * moveSpeed; }
  if (!TINYJOYPAD_DOWN)  { move_X = -dirX * moveSpeed; move_Y = -dirY * moveSpeed; }

  if (move_X != 0 || move_Y != 0) {
    bool canMoveX = !checkCollision(posX + move_X, posY);
    bool canMoveY = !checkCollision(posX, posY + move_Y);

    if (canMoveX && canMoveY) {
      posX += move_X;
      posY += move_Y;
      BobPosMove();
    }
    else if (canMoveX) {
      posX += move_X;
      BobPosMove();
    }
    else if (canMoveY) {
      posY += move_Y;
      BobPosMove();
    }
  }

  static int prevHitX = -1, prevHitY = -1;

  // Raycast each column
  for (uint8_t x = 0; x < 64; x++) {
    float cameraX = 2.0f * x / 64.0f - 1.0f;
    float rayDirX = dirX + planeX * cameraX;
    float rayDirY = dirY + planeY * cameraX;

    int mapX = (int)posX;
    int mapY = (int)posY;

    float deltaDistX = fabsf(1.0f / (rayDirX + 0.000001f));
    float deltaDistY = fabsf(1.0f / (rayDirY + 0.000001f));

    int stepX = (rayDirX < 0) ? -1 : 1;
    int stepY = (rayDirY < 0) ? -1 : 1;

    float sideDistX = (rayDirX < 0) ? (posX - mapX) * deltaDistX : (mapX + 1.0f - posX) * deltaDistX;
    float sideDistY = (rayDirY < 0) ? (posY - mapY) * deltaDistY : (mapY + 1.0f - posY) * deltaDistY;

    uint8_t side;
    int hitMapX, hitMapY;

    // DDA loop until wall hit
    while (true) {
      if (sideDistX < sideDistY) {
        sideDistX += deltaDistX;
        mapX += stepX;
        side = 0;
      } else {
        sideDistY += deltaDistY;
        mapY += stepY;
        side = 1;
      }

      if (mapX < 0 || mapX >= 10 || mapY < 0 || mapY >= 10) {
        hitMapX = mapX;
        hitMapY = mapY;
        break;
      }

      if (pgm_read_byte(&Lvl1[mapY][mapX]) == 1) {
        hitMapX = mapX;
        hitMapY = mapY;
        break;
      }
    }

    float perpWallDist;
    if (side == 0)
      perpWallDist = (mapX - posX + (1 - stepX)/2.0f) / rayDirX;
    else
      perpWallDist = (mapY - posY + (1 - stepY)/2.0f) / rayDirY;

    perpWallDist = (perpWallDist < 0.01f) ? 0.01f : perpWallDist;

    wallDist[x] = (perpWallDist > 5.1f) ? 255 : (uint8_t)(perpWallDist * 50.0f);

    int lineHeight = (int)(32.0f / perpWallDist);
    int drawStart = max(0,  16 - lineHeight/2);
    int drawEnd   = min(32, 16 + lineHeight/2);

    bool newTile = (hitMapX != prevHitX || hitMapY != prevHitY);

    // Draw wall caps and checkerboard texture
    if (drawStart < 32) VBuf(x, drawStart);
    if (drawEnd   >  0) VBuf(x, drawEnd - 1);

    for (int y = drawStart; y < drawEnd; y++) {
      if ((x + y) & 1) VBuf(x, y);
    }

    // Draw vertical edge when entering new tile
    if (newTile && x > 0) {
      for (int y = drawStart; y < drawEnd; y++) {
        VBuf(x - 1, y);
      }
    }

    prevHitX = hitMapX;
    prevHitY = hitMapY;
  }

  drawWorldSprites();
}

// -------------------------------------------------
// SHOOTING
// -------------------------------------------------
void shoot() {
  Sound(120,15);
  bulletActive = 5;
  bulletSize = 12; 
  bulletY = 31; 
  bulletX = 28 + pgm_read_byte(&BOB[BobPos << 1]);
}

// -------------------------------------------------
// OLED DISPLAY
// -------------------------------------------------
static inline uint8_t SliceByte(uint8_t page, uint8_t data) {
  uint8_t nibble = (page & 1) ? (data >> 4) : (data & 0x0F);
  static const uint8_t expand[16] PROGMEM = {
    0b00000000, 0b00000011, 0b00001100, 0b00001111,
    0b00110000, 0b00110011, 0b00111100, 0b00111111,
    0b11000000, 0b11000011, 0b11001100, 0b11001111,
    0b11110000, 0b11110011, 0b11111100, 0b11111111
  };
  return pgm_read_byte(&expand[nibble]);
}

void Tiny_Flip() {
  for (uint8_t p = 0; p < 8; p++) {
    uint8_t buf_page = p >> 1;
    for (uint8_t x = 0; x < 64; x++) {
      uint8_t out = SliceByte(p, VBuffer[buf_page][x]);
display.buffer[((x*2)+(p*128))]=out;
display.buffer[((x*2)+1+(p*128))]=out;
    }
  }
  display.display();
}

// -------------------------------------------------
// GAME INITIALIZATION
// -------------------------------------------------
void INIT_NEW_GAME_TARENA(void){
  BobPos = 0;
  SkipAnim = 0;

  bulletActive = 0;
  bulletSize = 0;
  bulletX = 32;
  bulletY = 31;

  posX = 4.5f;
  posY = 6.0f;
  dirX = 0.0f;
  dirY = -1.0f;
  planeX = 0.66f;
  planeY = 0.0f;

  playerHealth = 50;
  damageCooldown = 0;

  killCount = 0;
}

// -------------------------------------------------
// MAIN LOOP
// -------------------------------------------------
void loop_TARENA() {
      while(1){
((void)0);
((void)0);
  // Clear buffer to white
  for (uint16_t i = 0; i < 256; i++) ((uint8_t*)VBuffer)[i] = 0xff;

  // Game over screen
  if (playerHealth == 0) {
    static uint8_t val = 0; 
    while(1){
((void)0);
((void)0);
      if (BUTTON_UP) {break;}
      FRAME_CONTROL_TARENA2;
    }
    while(1){
((void)0);
((void)0);
      for (uint16_t i = 0; i < 26; i++) {
        VBuffer[2][19+i] = ~((val>128)?pgm_read_byte(&start[i]):0x00);
      }
      Tiny_Flip();
      FRAME_CONTROL_TARENA2;
      if (BUTTON_DOWN) {
        INIT_NEW_GAME_TARENA();
        break;
      }
      val+=2;
    }
  }

  // Shoot when button pressed and no active bullet
  if (BUTTON_DOWN && bulletActive == 0) shoot();

  updateTentacles();
  renderRaycast();

  // Bullet animation and drawing
  if (bulletActive) {
    bulletActive--;
    bulletY = 31 - (11 - bulletActive) * 15 / 11;
    bulletSize = 2 + bulletActive * 10 / 11;
    uint8_t r = bulletSize >> 1;

    for (int8_t dx_ = -r-1; dx_ <= r+1; dx_++) {
      int8_t px_ = bulletX + dx_;
      if (px_ < 0 || px_ >= 64) continue;
      for (int8_t dy_ = -r-1; dy_ <= r+1; dy_++) {
        int8_t py_ = bulletY + dy_;
        if (py_ < 0 || py_ >= 32) continue;
        if (dx_*dx_ + dy_*dy_ <= (r+1)*(r+1))
          VBuffer[py_ >> 3][px_] &= ~(1 << (py_ & 7));
      }
    }

    // Hit detection at end of shot
    if (bulletActive == 0) {
      uint8_t centerWallDist8 = wallDist[32];
      uint8_t hit = 0;
      (void)hit; 
      uint8_t killedIndex = 255;
      (void)killedIndex; 

      for (uint8_t i = 0; i < NUM_SPRITES; i++) {
        if (!worldSprites[i].active) continue;

        float dx = worldSprites[i].x - posX;
        float dy = worldSprites[i].y - posY;

        float distSq = dx*dx + dy*dy;
        if (distSq < 0.1f || distSq > 25.0f) continue;

        float proj = dx * dirX + dy * dirY;
        if (proj < 0.15f) continue;

        float perp = fabsf(dx * dirY - dy * dirX) / (proj + 0.1f);
        if (perp > 0.55f) continue;

        uint8_t enemyDist8 = (proj > 5.1f) ? 255 : (uint8_t)(proj * 50.0f);
        if (enemyDist8 >= centerWallDist8 + 8) continue;

        worldSprites[i].health--;
        hit = 1;
        Sound(200, 4);

        if (worldSprites[i].health == 0) {
          worldSprites[i].active = 0;
          killedIndex = i;
          killCount++;
          Sound(3, 15);

          // Respawn logic
          uint8_t candidate = 255;
          for (uint8_t j = 0; j < NUM_SPRITES; j++) {
            if (!worldSprites[j].active && j != killedIndex) {
              candidate = j;
              break;
            }
          }
          if (candidate != 255) {
            worldSprites[candidate].active = 1;
            worldSprites[candidate].health = 5;
            worldSprites[candidate].x = pgm_read_float(&spawnX[candidate]);
            worldSprites[candidate].y = pgm_read_float(&spawnY[candidate]);
          }
        }
        break;  // Only one enemy hit per shot
      }
    }
  }

  // Draw gun with bob animation
  uint8_t bobOffset = BobPos << 1;
  drawSprite2Bit(18 + pgm_read_byte(&BOB[bobOffset]),
                 19 + pgm_read_byte(&BOB[bobOffset + 1]), Gun);

  Tiny_Flip();
FRAME_CONTROL_TARENA;
}}
