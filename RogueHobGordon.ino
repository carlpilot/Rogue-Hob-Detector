
// Derived from https://github.com/JamesHarcourt7/arduino-rickroll

#include <SPI.h>  // For SD card reading
#include <SD.h>   // For SD card reading

const byte SDChipSelectPin = 10;

void setup() {
  println("Initialising SD");
  SD.begin(SDChipSelectPin);
}

void loop() {
  // put your main code here, to run repeatedly:

}
