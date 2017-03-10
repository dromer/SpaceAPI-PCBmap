#ifndef LEDS_H
#define LEDS_H

#include <Adafruit_WS2801.h>
#include <ArduinoJson.h>

extern uint8_t dataPin;
extern uint8_t clockPin;
extern Adafruit_WS2801 strip;

void setLeds();
void showLeds();
void selectSpace();

#endif
