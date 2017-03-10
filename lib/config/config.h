/*
* Configuration and global variables. see config.cpp for values
*/

#ifndef CONF_H
#define CONF_H

#include <Wire.h>

#include <Adafruit_WS2801.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
#include <SSD1306.h>


extern const char *ssid;
extern const char *password;

extern const char *url;

// define array of spaces
extern const char *mySpaces[];
extern const int spaceLen;
extern int spaceColour[];
extern uint32_t colorMem;

extern uint8_t dataPin;
extern uint8_t clockPin;

extern Adafruit_WS2801 strip;

// save the json file in memory
extern String stringbuf;
extern String stringbuf_c;

extern String line1;
extern String line2;
extern volatile unsigned int line2Pos;
extern volatile unsigned int scrollPause;

// LCD geometry
extern const int LCD_ROWS;
extern const int LCD_COLS;

// Encoder tracking
extern int encoderpinB;
extern int encoderpinA;
extern int encoderButton;
extern volatile unsigned int encoderPos;
extern volatile unsigned int encoderErr;
extern volatile unsigned int lastReportedPos;
extern volatile bool button;
extern int blinkcount;
extern bool A_set;
extern bool B_set;

// declare lcd object with address & config expander chip
extern hd44780_I2Cexp lcd;
extern SSD1306 display;

extern int premillis;
extern int lcdmillis;
extern int blinkmillis;

#endif
