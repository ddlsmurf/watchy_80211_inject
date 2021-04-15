#include "inject.h"
#include "Arduino.h"

#include <GxEPD2_BW.h>
#define CS 5
#define DC 10
#define RESET 9
#define BUSY 19
GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display(GxEPD2_154_D67(CS, DC, RESET, BUSY));

#include "face.h"

void setup(){
    display.init(0, false);
    display.setFullWindow();
    display.drawBitmap(0, 0, image, 200, 200, GxEPD_WHITE, GxEPD_BLACK);
    display.display(false);
    start_beacons();
}

void loop(){}



