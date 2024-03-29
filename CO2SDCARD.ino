/*
Save temperature in SD/microSD card every hour with DS3231 + SD/microSD module + Arduino
modified on 15 Apr 2019
by Mohammadreza Akbari @ Electropeak
https://electropeak.com/learn/
*/
#include <SPI.h>
#include <SD.h>
#include <Wire.h>
#include "SparkFun_SCD4x_Arduino_Library.h"
File dataFile;
/*
void dataLog() {
dataFile = SD.open("air.txt", FILE_WRITE);
dataFile.println(F("START"));
dataFile.print(":");
dataFile.print(F("CO2(ppm):")); 
dataFile.print(mySensor.getCO2());
dataFile.print(F("\tTemperature(C):"));
dataFile.print(mySensor.getTemperature(), 1);
dataFile.print(F("\tHumidity(%RH):"));
dataFile.print(mySensor.getHumidity(), 1);
dataFile.close();
}
*/
void setup ()
{
Wire.begin();
Serial.begin(9600);
Serial.print("Initializing SD card...");
if (!SD.begin(10)) {
Serial.println("initialization failed!");
while (1);
}
Serial.println("initialization done.");
dataFile = SD.open("air.txt", FILE_WRITE);
}

void loop ()
{
  dataFile.println("START");
}
