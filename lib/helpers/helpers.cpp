/*
* Helper functions
*/

#include <config.h>
#include <helpers.h>


void getJson(){
   int httpCode;
   HTTPClient http;
   Serial.print("requesting URL: ");
   Serial.println(url);

   http.begin(url); //, fingerprint); // for ssl
   http.setUserAgent("NCSA_Mosaic/2.0 (Windows 3.1)");
   httpCode = http.GET();
   Serial.println(httpCode);

   if (httpCode == 200) {
     stringbuf = http.getString();
     http.end();
   } else {
     http.end();
   }
}

// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}


void ICACHE_RAM_ATTR doEncoder(){
    static const int8_t decoder[2][2][2][2] = {
         0,  1, -1, -2,     // !A_set, !B_set
        -1,  0, -2,  1,     // !A_set,  B_set
         1, -2,  0, -1,     //  A_set, !B_set
        -2, -1,  1,  0,     //  A_set,  B_set
    };
    static int rawpos;
    bool A_now = digitalRead(encoderpinA);
    bool B_now = digitalRead(encoderpinB);

    int action = decoder[A_set][B_set][A_now][B_now];
    switch( action ) {
    case 0:
        break;
    case 1:
        ++rawpos;
        if( rawpos == 4){
            rawpos = 0;
            ++encoderPos;
            if( encoderPos == spaceLen )
                encoderPos = 0;
        }
        break;
    case -1:
        --rawpos;
        if( rawpos == -4){
            rawpos = 0;
            if( encoderPos == 0 )
                encoderPos = spaceLen;
            --encoderPos;
        }
        break;
    default:
        ++encoderErr;
    }

    A_set = A_now;
    B_set = B_now;

}


void flipButton(){
    button = true;
}
