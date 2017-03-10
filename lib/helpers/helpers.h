/*
* helpers header-file
*/

#ifndef HELPER_H
#define HELPER_H
#include <Arduino.h>
#include <ESP8266HTTPClient.h>

void getJson();
uint32_t Color(byte r, byte g, byte b);
void doEncoder();
void flipButton();

#endif
