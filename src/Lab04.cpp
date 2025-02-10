/*  Program:        Lab04
**  Author:         John Hutton
**  Created Date:   02/17/23
**  Modified Date:  02/14/24  
**
**  Description
**  -----------
**  This lab wires four buttons tied to for different priority tasks.
**  We implement a round robin and a function queue method
**  for running these tasks.
**  
**  Reference Links
**  ---------------
**  https://github.com/thomasfredericks/Bounce2
*/
#include <Arduino.h>
#include <esp.h>
//#include <Wifi.h>
#include <string.h>
#include <Bounce2.h>    // to debounce pushbuttons

/* Prototype Functions */
void dummyFunction();
/* End Prototype function */

/* Program Globals*/
#define DEBOUNCE_INTERVAL      40
#define AButtonPin 21 // ESP32 IO21
#define BButtonPin 17 // ESP32 IO17
#define CButtonPin 16 // ESP32 IO16
#define DButtonPin 19 // ESP32 MISO

// Variables

// setup
void setup() {
  // Serial terminal for debug and interaction
  Serial.begin(115200);
  Serial.print("\nSerial ready!\n");

}

void loop() {

  // Device Task Code
  
  // Terminal Control
  
}

// Functions
void dummyFunction () {
  // This is just a placeholder
}