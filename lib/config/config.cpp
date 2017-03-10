/*
* Configuration and global variables
*/

#include <config.h>


// give me your wifi bro
const char *ssid = "mywifinetwork";
const char *password = "somethingeasytoremember";

// where is the json?
const char *url = "http://home.idiopolis.nl/pcbmap.json";

// define array of spaces
const char *mySpaces[] = {
    "LAG",
    "NURDSpace",
    "Hack42",
    "Pixelbar",
    "Sk1llz",
    "RevSpace",
    "Technologia Incognita",
    "Bitlair",
    "Frack",
    "TkkrLab",
    "VoidWarranties",
    "UrLab",
    "Brixel",
    "syn2cat",
    "ChaosStuff"
  };

const int spaceLen = sizeof(mySpaces)/sizeof(mySpaces[0]);

// keep an array of colours for each space
int spaceColour[spaceLen];
uint32_t colorMem;

uint8_t dataPin  = D6;    // Yellow wire on Adafruit Pixels
uint8_t clockPin = D5;    // Green wire on Adafruit Pixels

Adafruit_WS2801 strip = Adafruit_WS2801(spaceLen, dataPin, clockPin);

// save the json file in memory and keep a copy
String stringbuf;
String stringbuf_c;

String line1;
String line2;
volatile unsigned int line2Pos = 0;
volatile unsigned int scrollPause = 0;

// LCD geometry
const int LCD_ROWS = 2;
const int LCD_COLS = 16;

// Encoder tracking
int encoderpinA = 0;
int encoderpinB = 3;
int encoderButton = 2;
volatile unsigned int encoderPos = 0;
volatile unsigned int encoderErr = 0;
volatile unsigned int lastReportedPos = 1;

// Set up encoder and button states
volatile bool button = false;
int blinkcount = 0;
bool A_set = false;
bool B_set = false;

// define lcd object with address & config expander chip
hd44780_I2Cexp lcd(0x3F);

// define oled object
SSD1306 display(0x3c, 4, 5);

// set up timers
int premillis = millis();
int lcdmillis = millis();
int blinkmillis = millis();
