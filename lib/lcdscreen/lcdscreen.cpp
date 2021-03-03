/*
* hd44780 stuff
*/

#include <config.h>
#include <lcdscreen.h>


void getHDtext(){
    if (stringbuf.length()>1) {
        DynamicJsonDocument doc(1024);
        auto error = deserializeJson(doc, stringbuf);

        // Test if parsing succeeds.
        if (error) {
            Serial.println("parseObject() failed");
            return;
        }

        line1 = mySpaces[encoderPos];

        // String contact = root[mySpaces[encoderPos]]["contact"];
        String address = doc[mySpaces[encoderPos]]["location"]["address"];

        line2 = address;

        // display lat/lon?
        // double loclat = root[mySpaces[encoderPos]]["location"]["lat"];
        // double loclon = root[mySpaces[encoderPos]]["location"]["lon"];
      }
}

void setHDtext(String line1, String line2){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
}
