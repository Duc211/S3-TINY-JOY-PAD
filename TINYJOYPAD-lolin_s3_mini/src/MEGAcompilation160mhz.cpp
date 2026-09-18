#include <Arduino.h>
#include <WiFi.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"
#include <Wire.h>                                    
#include "SSD1306.h"     
#include "MENU_ESP.h"
#include <LittleFS.h>
#include <Adafruit_NeoPixel.h>
#include "TESTMOD/JOY_TESTER_ESP.h"
#include "DATA/TINYMORPION/Tiny-Morpion-ESP.h"
#include "DATA/TINYMISSILE/Tiny-Missile-ESP.h"
#include "DATA/TINYDDUG/Tiny-DDug-ESP.h"
#include "DATA/TINYPLAQUE/Tiny-Plaque-ESP.h"
#include "DATA/TINYTRICK/tiny-trick-ESP.h"
#include "DATA/TINYBIKE/Tiny-Bike-ESP.h"
#include "DATA/TINYARKANOID/tiny-arkanoid-ESP.h"
#include "DATA/TINYBOMBER/tiny-bomber-ESP.h"
#include "DATA/TINYPACMAN/tiny-pacman-ESP.h"
#include "DATA/TINYGILBERT/tiny-gilbert-ESP.h"
#include "DATA/TINYPINBALL/tiny-Pinball-ESP.h"
#include "DATA/TINYINVADERS/Tiny_space_invaders-ESP.h"
#include "DATA/TINYBERT/Tiny-bert-ESP.h"
#include "DATA/TINYTRIS/tiny-tris-ESP.h"
#include "DATA/TINYLANDER/tiny-lander-ESP.h" 
#include "DATA/TINYPIPE/Tiny-Pipe-ESP.h"
#include "DATA/TINYSQUEST/Tiny-SQuest-ESP.h"
#include "DATA/ARDUMANIA/Ardumania-ESP.h" 
#include "DATA/NOHZDYVE/Nohzdyve-ESP.h" //Nohzdyve has been adapted from the official version on arduboy. The audio library has not been carried over, so the sounds are different from the original.
#include "DATA/GILBERTINTHEDOWNLAND/GilbertintheDownland-ESP.h" //Gilbert in the Downland has been adapted from the official version on arduboy.
#include "DATA/TINYDOC/TinyDoc-ESP.h"
#include "DATA/TINYARENA/TinyArena-ESP.h"

SSD1306  display(0x3c,SDA, SCL);

// Forward declarations (needed for .cpp compilation; Arduino .ino auto-generates these)
void disableWatchdog();
void LOAD_Config_EEPROM();
void SAVE_FLIP(uint8_t FRm);
void ESP_SPLASH(uint8_t FRm);
void FADEIN_MENU(uint8_t FRm);
void SLIDE_SELECT(void);
void SLIDE_SHOW(uint8_t Direct);
void SLIDE_DIRECTION(uint8_t Direct);
void CONFIG_SLIDE(void);
void EEPROM_SLIDE(void);
void ESP_MENU(void);
void ESP_CONFIG_FLIP(uint8_t FRm);
void ESP_CONFIG_SET(uint8_t FRm);
void ESP_CONFIG_CONTRAST_FLIP(void);
void ESP_EEPROM_FLIP(uint8_t FRm);
void ESP_EEPROM_SET(uint8_t FRm);
void EEPROM_CLEAR_FLIP(void);
void WRITE_CLEAR_EEPROM(void);
void save_Config_EEPROM(void);
uint8_t Check_EEPROM_Slide(uint8_t Val_);
uint8_t blitzSprite(int8_t xPos,int8_t yPos,uint8_t xPASS,uint8_t yPASS,uint8_t FRAME,const uint8_t *SPRITES);
uint8_t Recupe(uint8_t xPASS,uint8_t yPASS);
uint8_t RecupContrast(uint8_t x,uint8_t y);
uint8_t recupe_VERSION_MEGA(uint8_t xPASS,uint8_t yPASS);
const uint16_t FIRMWARE_VERSION=27;

#define FLUID (1.2) //1.3 80mhz
#define FLUID_SETUP (1.1) //1.3 80mhz
#define Frame_Rate 12 //30 80 mhz
#define Frame_Rate_FADE 40 //30 80 mhz
#define SHOW_COMMUNITY 1

//Public Var
uint8_t MAX_VIGNETTE=21;// 16 for 17 games
//VAR SLIDE
uint8_t FADE_ESP=8;//0 a 8 fix
uint8_t Slide_OFF=0;
uint8_t Slide1=1;
uint8_t Slide2=2;
uint8_t SLIDE_POS;
uint8_t Contrast;
//FIN VAR SLIDE


// NeoPixel RGB LED on GPIO48
Adafruit_NeoPixel rgbLed(1, 48, NEO_GRB + NEO_KHZ800);

void rainbowCycleTask(void *parameter);

void setup() {
disableWatchdog(); // Désactiver les deux WDT (soft et hard)
delay( 1 );
((void)0);
((void)0);
delay( 1 );
Serial.begin(115200);
WiFi.disconnect(true);       // déconnecte + efface les credentials en flash
delay(1);                    // petit délai pour que ça prenne effet
  WiFi.mode(WIFI_OFF);         // ← Désactive complètement le WiFi (radio + stack)
#ifdef ARDUINO_ARCH_ESP8266
  WiFi.forceSleepBegin();      // ← Force le mode sleep du modem (souvent combiné avec le précédent)
  system_phy_set_max_tpw(0); // réduit la puissance TX à 0 (pas toujours nécessaire)
#endif
  pinMode(PIN_,OUTPUT);
pinMode(PIN_START_BUTTON,INPUT_PULLUP);
pinMode(PIN_RIGHT_BUTTON,INPUT_PULLUP);
pinMode(PIN_DOWN_BUTTON,INPUT_PULLUP);
pinMode(PIN_LEFT_BUTTON,INPUT_PULLUP);
pinMode(PIN_UP_BUTTON,INPUT_PULLUP);
 display.init();
 display.flipScreenVertically();
 display.setContrast(Contrast);

  LittleFS.begin();
  File eepromFile = LittleFS.open("/eeprom.bin", "r");
  if (eepromFile) {
    eepromFile.read(LEEPROM, 256);
    eepromFile.close();
  } else {
    memset(LEEPROM, 0xFF, 256);
    eepromFile = LittleFS.open("/eeprom.bin", "w");
    eepromFile.write(LEEPROM, 256);
    eepromFile.close();
  }
  rgbLed.begin();
  rgbLed.setBrightness(255);
  xTaskCreate(rainbowCycleTask, "RGB", 2048, NULL, 1, NULL);
  /*
  EEPROM using Location

 -> tiny-tris (0-10)
 
 -> ARDUMANIA  (11-21)

 -> Audio Setting (9)

 -> Contrast Setting (22)

  */
}

uint32_t Wheel(uint8_t pos) {
  pos = 255 - pos;
  if (pos < 85) return rgbLed.Color(255 - pos * 3, 0, pos * 3);
  if (pos < 170) { pos -= 85; return rgbLed.Color(0, pos * 3, 255 - pos * 3); }
  pos -= 170;
  return rgbLed.Color(pos * 3, 255 - pos * 3, 0);
}

void rainbowCycleTask(void *parameter) {
  uint16_t j = 0;
  while (true) {
    rgbLed.setPixelColor(0, Wheel((uint8_t)j));
    rgbLed.show();
    j = (j + 1) & 0xFF;
    vTaskDelay(pdMS_TO_TICKS(30));
  }
}

void loop() {
((void)0);
((void)0);
Serial.println("Mega Compilation");
Serial.println("  Start MENU");
LOAD_Config_EEPROM();
//SPLASH
{
My_delay_ms(1000);
if (!SHOW_COMMUNITY) {MAX_VIGNETTE--;}
if (BUTTON_DOWN) {if (loop_JOYTESTER()) {if (!SHOW_COMMUNITY) {MAX_VIGNETTE++;}}}//JOY_TESTER
currentMillis=millis();
for(uint8_t t=0;t<9;t++){
ESP_SPLASH((t));
while((currentMillis-MemMillis)<Frame_Rate_FADE){
currentMillis=millis();}
MemMillis=currentMillis;}
My_delay_ms(1000);}
for(uint8_t t=0;t<9;t++){
ESP_SPLASH((8-t));}
currentMillis=millis();
for(uint8_t t=0;t<9;t++){
FADEIN_MENU(t);
while((currentMillis-MemMillis)<Frame_Rate_FADE){
currentMillis=millis();
}
MemMillis=currentMillis;
}
randomSeed(MemMillis);
MENU:;
FADE_ESP=8;
while(1){
((void)0);
((void)0);
if (TINYJOYPAD_RIGHT==0) {Sound_TTRICK(30,10);SLIDE_SHOW(0);SLIDE_DIRECTION(1);}
if (TINYJOYPAD_LEFT==0) {Sound_TTRICK(30,10);SLIDE_DIRECTION(0);SLIDE_SHOW(1);}
if (TINYJOYPAD_DOWN==0) {Sound_TTRICK(60,10);CONFIG_SLIDE();}
if ((TINYJOYPAD_UP==0)&&(Check_EEPROM_Slide(Slide1))) {Sound_TTRICK(60,10);EEPROM_SLIDE();}
ESP_MENU();
if (BUTTON_DOWN) {
for(uint8_t t=0;t<40;t++){
My_delay_ms(1);
if (BUTTON_UP) {goto CANCEL;} 
}
randomSeed(MemMillis);
SLIDE_SELECT();
switch(Slide1){

case (0):loop_TLANDER();break;
case (1):loop_TGILBERT();break;
case (2):loop_TTRICK();break;
case (3):loop_TINVADERS();break;
case (4):loop_TPINBALL();break;
case (5):loop_TPACMAN();break;
case (6):loop_TBOMBER();break;
case (7):loop_TBIKE();break;
case (8):loop_TBERT();break;
case (9):loop_TARKANOID();break;
case (10):loop_TTRIS();break;
case (11):loop_TPLAQUE();break;
case (12):loop_TDDUG();break;
case (13):loop_TMISSILE();break;
case (14):loop_TMORPION();break;
case (15):loop_TPIPE();break;
case (16):loop_TSQUEST();break;
case (17):loop_ARDUMANIA();break;
case (18):loop_NOHZDYVE();break;
case (19):loop_GILBERTINTHEDOWNLAND();break;
case (20):loop_TDOC();break;
case (21):loop_TARENA();break;
default:goto CANCEL;break;
}
CANCEL:;
}}
goto MENU;
}

void disableWatchdog() {
  // ESP32: watchdog is not enabled by default; no action needed
}

uint8_t Check_EEPROM_Slide(uint8_t Val_){
  switch(Val_){
   case 10:
   case 17:return 1;break;
   default:return 0;break;
  }
}

void FADEIN_MENU(uint8_t FRm){
uint8_t y=0;
uint8_t x=0; 
uint8_t RETURN_BYTE_MENU;
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
if ((x%2)==0) {
RETURN_BYTE_MENU=pgm_read_byte(&MENU_FADE[(FRm*2)]);}else{
RETURN_BYTE_MENU=pgm_read_byte(&MENU_FADE[(FRm*2)+1]);}
display.buffer[(x+(y*128))]=blitzSprite(0,0,x,y,Slide1,MENU_VIGNETTE)&RETURN_BYTE_MENU;
}}
display.display();   
}

void ESP_SPLASH(uint8_t FRm){
uint8_t y=0;
uint8_t x=0; 
uint8_t RETURN_BYTE_MENU;
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
if ((x%2)==0) {
RETURN_BYTE_MENU=pgm_read_byte(&MENU_FADE[(FRm*2)]);}else{
RETURN_BYTE_MENU=pgm_read_byte(&MENU_FADE[(FRm*2)+1]);}
display.buffer[(x+(y*128))] =(blitzSprite(0,0,x,y,0,INTRO_MENU)|recupe_VERSION_MEGA(x,y))&(RETURN_BYTE_MENU);
}}
display.display();  
}


void SLIDE_SELECT (void){
while(1) {
ESP_MENU();
while((currentMillis-MemMillis)<Frame_Rate_FADE){
currentMillis=millis();
}
MemMillis=currentMillis;
if (FADE_ESP==0) {FADE_ESP=8;goto ENDING;}
FADE_ESP=(FADE_ESP>0)?FADE_ESP-1:0; 
}
ENDING:;
My_delay_ms(1000);
}

void ESP_CONFIG_FLIP(uint8_t FRm){
uint8_t y=0;
uint8_t x=0; 
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))] =( (blitzSprite(0,FRm,x,y,0,SETUP))|((blitzSprite(0,0,x,y,Slide1,MENU_VIGNETTE))&(0xff-blitzSprite(0,FRm,x,y,1,SETUP))));
}}
display.display();  
}

void ESP_CONFIG_SET(uint8_t FRm){
uint8_t y=0;
uint8_t x=0; 
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))] =((blitzSprite(0,0,x,y,0,SETUP))&(0xff-blitzSprite(FRm,7,x,y,0,Trackbar)));
}}
display.display();  
}

void CONFIG_SLIDE(void){
uint8_t Switch=1;
uint8_t Pos_TrackBar=85;
uint8_t Speed_0=64;
uint8_t LOOP=64;
if (SOUND_ON_OFF==HIGH) {Pos_TrackBar=50;}
while(1){
ESP_CONFIG_FLIP(Speed_0); 
if (Speed_0>0) {Speed_0=Speed_0/FLUID_SETUP;}else{break;}
}
My_delay_ms(33);
do {((void)0);
((void)0);}while(TINYJOYPAD_DOWN==0);
My_delay_ms(33);
do {((void)0);
((void)0);}while(TINYJOYPAD_DOWN==0);
while(1){
((void)0);
((void)0);
if (TINYJOYPAD_DOWN==0) {if (Switch==1) {SOUND_ON_OFF=(Pos_TrackBar==50)?HIGH:LOW;goto END;}}
if (TINYJOYPAD_RIGHT==0) {Switch=2;}
if (TINYJOYPAD_LEFT==0)  {Switch=0;}
if (TINYJOYPAD_UP==0) {
while((TINYJOYPAD_UP==0)||(BUTTON_DOWN)){
((void)0);
((void)0);
ESP_CONFIG_CONTRAST_FLIP();

My_delay_ms(11);
if (BUTTON_DOWN) {
  if (Contrast<255) {Contrast++;if ((Contrast==255)||(Contrast==1)){My_delay_ms(300);}}else{Contrast=0;}
  display.setContrast(Contrast);
  }}}
if (BUTTON_DOWN) {
if (Switch==1) {
for (LOOP=0;LOOP<50;LOOP++) {
if (BUTTON_UP) {goto CONT;}
My_delay_ms(33);
}
SOUND_ON_OFF=(Pos_TrackBar==50)?HIGH:LOW;
save_Config_EEPROM();
SAVE_FLIP(Pos_TrackBar);
My_delay_ms(1000);
goto END;
}}
CONT:;
switch(Switch){
case 0:if (Pos_TrackBar>50) {Pos_TrackBar--;}else{Switch=1;};break;
case 1:break;
case 2:if (Pos_TrackBar<85) {Pos_TrackBar++;}else{Switch=1;};break;
}
ESP_CONFIG_SET(Pos_TrackBar);
while((currentMillis-MemMillis)<(Frame_Rate/4)){
currentMillis=millis();}
MemMillis=currentMillis;
}  
END:;
Speed_0=64;
while(1){
((void)0);
((void)0);
ESP_CONFIG_FLIP(64-Speed_0); 
if (Speed_0>0) {Speed_0=Speed_0/FLUID_SETUP;}else {break;}
}
while(TINYJOYPAD_DOWN==0){((void)0);
((void)0);}
}

uint8_t RecupContrast(uint8_t x,uint8_t y){
  //14-114
uint8_t ContVal=map(Contrast,0,255,14,114);
if (y==2) {
if ((x>13)&&(x<ContVal)) return 0b11000011;
}
return 0xff;
}

void ESP_CONFIG_CONTRAST_FLIP(void){
uint8_t y=0;
uint8_t x=0; 
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))] =((blitzSprite(0,0,x,y,0,Contrast_Pic))&(RecupContrast(x,y)));
}}
display.display();  
}

void SAVE_FLIP(uint8_t FRm){
uint8_t y;
uint8_t x,LooP;
uint8_t BYTE_=0; 
for (LooP = 0; LooP < 20; LooP++){  
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))] = blitzSprite(0,0,x,y,0,SETUP);
BYTE_=blitzSprite(FRm,7,x,y,0,Trackbar);
if ((LooP%2)!=0) {BYTE_|=blitzSprite(64,32,x,y,0,Saved);}
display.buffer[(x+(y*128))] &=(0xff-(BYTE_));
}}
display.display();  
My_delay_ms(15);
}
}

void ESP_EEPROM_FLIP(uint8_t FRm){
uint8_t y=0;
uint8_t x=0; 
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))] =( (blitzSprite(0,FRm,x,y,0,CLEAR_EEPROM))|((blitzSprite(0,0,x,y,Slide1,MENU_VIGNETTE))&(0xff-blitzSprite(0,FRm,x,y,1,CLEAR_EEPROM))));
}}
display.display();  
}

void ESP_EEPROM_SET(uint8_t FRm){
uint8_t y=0;
uint8_t x=0; 
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))] = blitzSprite(0,0,x,y,0,CLEAR_EEPROM);
if (FRm==1) display.buffer[(x+(y*128))] &= (0xff-blitzSprite(61,11,x,y,0,LONG_PRESS));
}}
display.display();  
}

void EEPROM_SLIDE(void){
uint8_t TRIG_=0;
uint8_t Speed_0=64;
uint8_t LOOP=0;
while(1){
ESP_EEPROM_FLIP((64-Speed_0)-64); 
if (Speed_0>0) {Speed_0=Speed_0/FLUID_SETUP;}else{break;}
}
My_delay_ms(33);
do {((void)0);
((void)0);}while(TINYJOYPAD_UP==0);
while(1){
((void)0);
((void)0);
if (TINYJOYPAD_UP==0) {goto END;}
if (TINYJOYPAD_RIGHT==0) {TRIG_=1;}else{TRIG_=0;}
if (BUTTON_DOWN) {
if (TRIG_==1) {
for (LOOP=0;LOOP<90;LOOP++) {
if (BUTTON_UP) {goto ByPass;}
My_delay_ms(33);
}
EEPROM_CLEAR_FLIP();
WRITE_CLEAR_EEPROM();
My_delay_ms(1000);
goto END;
}
ByPass:;
}
ESP_EEPROM_SET(TRIG_);
}  
END:;
Speed_0=64;
while(1){
  ((void)0);
((void)0);
  ESP_EEPROM_FLIP(Speed_0-64);
  if (Speed_0>0) {Speed_0=Speed_0/FLUID_SETUP;}else {break;}
}
while(TINYJOYPAD_UP==0){
((void)0);
((void)0);
}
}

void EEPROM_CLEAR_FLIP(void){
uint8_t y=0;
uint8_t x=0; 
uint8_t LooP=0; 
uint8_t BYTE_=0;
for (LooP = 0; LooP < 20; LooP++){  
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
if ((LooP%2)!=0) {BYTE_=blitzSprite(61,11,x,y,0,LONG_PRESS);}else{BYTE_=0x00;}
display.buffer[(x+(y*128))] =( (blitzSprite(0,0,x,y,0,CLEAR_EEPROM)) & (0xff-BYTE_) );
}}
My_delay_ms(15);
display.display(); 
}}

void WRITE_CLEAR_EEPROM(void){
uint8_t t;
switch(Slide1){
//tiny-tris (0-10)
case 9:for (t=0;t<11;t++){LEEPROM[t]=0;}break;

//ARDUMANIA  (11-21)
case 16:for (t=11;t<22;t++){LEEPROM[t]=0;}break;
default:break;
}
  //Reset Audio Setting (9) (0=OFF/1=ON)
  //LEEPROM[9]=1;
  //SOUND_ON_OFF=HIGH;
  EEPROM.commit();
}

void LOAD_Config_EEPROM(void){
uint8_t TMP;
  TMP=LEEPROM[9];
  Contrast=LEEPROM[22];
display.setContrast(Contrast);
if (TMP>0) {SOUND_ON_OFF=HIGH;}else{SOUND_ON_OFF=LOW;}
}

void save_Config_EEPROM(void){
  LEEPROM[9]=SOUND_ON_OFF;
  LEEPROM[22]=Contrast;
  EEPROM.commit();
}

void SLIDE_SHOW(uint8_t Direct){
if (Direct==0) {SLIDE_POS=127;}else{SLIDE_POS=0;}
float Speed_0=128;
while(1){
  ((void)0);
((void)0);
Slide_OFF=1;
if (Direct==1) {if (SLIDE_POS<127) {SLIDE_POS=(128-Speed_0); }else {SLIDE_POS=128;goto STOP;}}else{if ((SLIDE_POS)>0) {SLIDE_POS=Speed_0;} else {SLIDE_POS=0;goto STOP;}}
Speed_0=Speed_0/FLUID;
while((currentMillis-MemMillis)<Frame_Rate){
currentMillis=millis();
}
MemMillis=currentMillis;
ESP_MENU();  
}
STOP:;
Slide_OFF=0;
}

void SLIDE_DIRECTION(uint8_t Direct){
if (Direct==0) {
  Slide1=(Slide1>0)?Slide1-1:MAX_VIGNETTE;
  Slide2=(Slide2>0)?Slide2-1:MAX_VIGNETTE;
}else{
Slide1=(Slide1<MAX_VIGNETTE)?Slide1+1:0; 
Slide2=(Slide2<MAX_VIGNETTE)?Slide2+1:0; 
}}

void ESP_MENU(void){
uint8_t y=0;
uint8_t x=0; 
for (y = 0; y < 8; y++){   
for (x = 0; x < 128; x++){
display.buffer[(x+(y*128))]=Recupe(x,y);
}}
display.display();  
}

uint8_t blitzSprite(int8_t xPos,int8_t yPos,uint8_t xPASS,uint8_t yPASS,uint8_t FRAME,const uint8_t *SPRITES){
uint8_t OUTBYTE;
uint8_t WSPRITE=(pgm_read_byte(&SPRITES[0]));
uint8_t HSPRITE=(pgm_read_byte(&SPRITES[1]));
uint16_t Wmax=((HSPRITE*WSPRITE)+1);
uint16_t PICBYTE=FRAME*(Wmax-1);
int8_t RECUPELINEY=RecupeLineY_TDDUG(yPos);
if ((xPASS>((xPos+(WSPRITE-1))))||(xPASS<xPos)||((RECUPELINEY>yPASS)||((RECUPELINEY+(HSPRITE))<yPASS))) {return 0x00;}
int8_t SPRITEyLINE=(yPASS-(RECUPELINEY));
uint8_t SPRITEyDECALAGE=(RecupeDecalageY_TDDUG(yPos));
uint16_t ScanA=(((xPASS-xPos)+(SPRITEyLINE*WSPRITE))+2);
uint16_t ScanB=(((xPASS-xPos)+((SPRITEyLINE-1)*WSPRITE))+2);
if (ScanA>Wmax) {OUTBYTE=0x00;}else{OUTBYTE=SplitSpriteDecalageY_TDDUG(SPRITEyDECALAGE,pgm_read_byte(&SPRITES[ScanA+(PICBYTE)]),1);}
if ((SPRITEyLINE>0)) {
uint8_t OUTBYTE2=SplitSpriteDecalageY_TDDUG(SPRITEyDECALAGE,pgm_read_byte(&SPRITES[ScanB+(PICBYTE)]),0);
if (ScanB>Wmax) {return OUTBYTE;}else{return OUTBYTE|OUTBYTE2;}
}else{return OUTBYTE;}
}

uint8_t Recupe(uint8_t xPASS,uint8_t yPASS){
uint8_t BYTE_0;
uint8_t SHADE;
uint8_t Y_POSSITION=map(SLIDE_POS,0,128,0,64);
if ((xPASS%2)==0) {SHADE=pgm_read_byte(&MENU_FADE[FADE_ESP*2]);}else{SHADE=pgm_read_byte(&MENU_FADE[(FADE_ESP*2)+1]);}
if (Slide_OFF==0) {
BYTE_0=0x00;
Y_POSSITION=64;
SLIDE_POS=128;
}else{
BYTE_0=blitzSprite(SLIDE_POS,Y_POSSITION,xPASS,yPASS,Slide2,MENU_VIGNETTE);
}
return  SHADE&(((blitzSprite(SLIDE_POS-128,64-Y_POSSITION,xPASS,yPASS,Slide1,MENU_VIGNETTE))|(BYTE_0)));
}

uint8_t recupe_VERSION_MEGA(uint8_t xPASS,uint8_t yPASS){
  if (xPASS<8) {return 0;}
if (xPASS>23){return 0;}
if (yPASS<7) {return 0;}
uint8_t M10000_MEGA=(FIRMWARE_VERSION/1000);
uint8_t M1000_MEGA=(((FIRMWARE_VERSION)-(M10000_MEGA*1000))/100);
uint8_t M100_MEGA=(((FIRMWARE_VERSION)-(M1000_MEGA*100)-(M10000_MEGA*1000))/10);
uint8_t M10_MEGA=(((FIRMWARE_VERSION)-(M100_MEGA*10)-(M1000_MEGA*100)-(M10000_MEGA*1000)));
return 
(
 SPEED_BLITZ_TDDUG(8,7,xPASS,yPASS,M10000_MEGA,police_MEGA)|
 SPEED_BLITZ_TDDUG(12,7,xPASS,yPASS,M1000_MEGA,police_MEGA)|
 SPEED_BLITZ_TDDUG(16,7,xPASS,yPASS,M100_MEGA,police_MEGA)|
 SPEED_BLITZ_TDDUG(20,7,xPASS,yPASS,M10_MEGA,police_MEGA));
}
