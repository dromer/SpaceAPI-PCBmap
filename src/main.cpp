/*
 * SpaceAPI_PCBMap:Benelux
 *
 */

#include <Arduino.h>
#include <ESP8266WiFi.h>

// PCBmap headers
#include <config.h>
#include <helpers.h>
#include <lcdscreen.h>
#include <oledscreen.h>
#include <leds.h>


void setup() {
    // init serial port
    Serial.begin(115200);
    Serial.println();
    Serial.print("connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);

    // really disable spamming wifi ;(
    WiFi.mode(WIFI_STA);
    WiFi.softAPdisconnect(true);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());

    // start leds
    strip.begin();
    strip.show();

    // set encoder pins
    A_set = digitalRead(encoderpinA);
    B_set = digitalRead(encoderpinB);

    pinMode(encoderpinA, INPUT_PULLUP);
    pinMode(encoderpinB, INPUT_PULLUP);
    pinMode(encoderButton, INPUT_PULLUP);
    attachInterrupt(encoderpinA, doEncoder, CHANGE);
    attachInterrupt(encoderpinB, doEncoder, CHANGE);
    attachInterrupt(encoderButton, flipButton, FALLING);

    // set hd44780
    // initialize LCD with number of columns and rows:
    if( lcd.begin(LCD_COLS, LCD_ROWS))
    {
        // begin() failed so blink the onboard LED if possible
        #ifdef LED_BUILTIN
        pinMode(LED_BUILTIN, OUTPUT);
        while(1)
        {
            digitalWrite(LED_BUILTIN, HIGH);
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
        }
        #else
        while(1){} // spin and do nothing
        #endif
    }
    lcd.clear();
    line1 = "PCBMAP init?";
    lcd.print(line1);

    display.init();
    // display.setContrast(0x01);
    display.clear();

    getJson();
    setLeds();
    showLeds();
    spaceLogo();
}


void loop(){
    // get json and show leds
    if (millis()-premillis >= 20000){
        getJson();
        setLeds();
        showLeds();
        premillis = millis();
    }

    // show lines on lcd and scroll if needed
    // todo: add scroll for 1st line
    if (millis()-lcdmillis >= 300){

        if (line2.length() > LCD_COLS){

            String line2mod = line2;
            line2mod.remove(0,line2Pos);
            line2mod.remove(line2Pos+LCD_COLS);

            setHDtext(line1, line2mod);

            if(scrollPause < 2){
                scrollPause++;
                goto pauseMom;
            }
            line2Pos++;

            if(line2Pos == line2.length()){
                line2Pos = 0;
                scrollPause = 0;
            }
        } else {
            setHDtext(line1, line2);
        }
        pauseMom: ;
        lcdmillis = millis();
    }

    // If encoder turns, do stuff
    if (lastReportedPos != encoderPos){
        getHDtext();
        selectSpace();

        lastReportedPos = encoderPos;
        line2Pos = 0;
        scrollPause = 0;

        spaceLogo();
    }

    // If button activated, do stuff
    if (button){
        // blink the selected led
        if (millis()-blinkmillis >= 100){
            if ((blinkcount < 8) && (blinkcount%2 == 0)){
                selectSpace();
                blinkcount++;
            } else if (blinkcount < 8){
                showLeds();
                blinkcount++;
            } else {
                button = false;
                blinkcount = 0;
            }
            blinkmillis = millis();
        }
    }
}
