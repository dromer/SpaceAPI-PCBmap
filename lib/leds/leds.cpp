/*
* Led stuff
*/

#include <config.h>
#include <leds.h>
#include <helpers.h>


void setLeds(){
  if (stringbuf.length()>1) {
    //Start parsing json
    DynamicJsonBuffer jsonBuffer;
    JsonObject& root = jsonBuffer.parseObject(stringbuf);

    DynamicJsonBuffer jsonBuffer_c;
    JsonObject& root_c = jsonBuffer.parseObject(stringbuf_c);

    // Test if parsing succeeds.
    if (!root.success()) {
      Serial.println("parseObject() failed");
      return;
    }

        // Check json for all spaces in mySpaces[]
        for (int thisSpace = 0; thisSpace < spaceLen; thisSpace++){
            // read space from json and set colour (move to color/animation-mode at some point)
            bool spaceState = root[mySpaces[thisSpace]]["state"]["open"];
            bool prevState = root_c[mySpaces[thisSpace]]["state"]["open"];
            if (spaceState){
                    spaceColour[thisSpace] = Color(0, 100, 0);
            } else {
                    spaceColour[thisSpace] = Color(100, 0, 0);
            }

            if (spaceState != prevState){
                encoderPos = thisSpace;
                Serial.print("positioning to: ");
                Serial.println(thisSpace);
            }
        }
        stringbuf_c = stringbuf;
    }
}

void showLeds(){
    for (int i=0; i < strip.numPixels(); i++){
      strip.setPixelColor(i, spaceColour[i]);
    }
    strip.show();
}

void selectSpace(){
    // sets a hightlight on the selected space
    // then stores the old value back
    colorMem = spaceColour[encoderPos];
    spaceColour[encoderPos] = spaceColour[encoderPos] + Color(0,0,100);
    showLeds();
    spaceColour[encoderPos] = colorMem;
}
