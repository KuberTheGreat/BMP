#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
  Serial.println("Could not found BMP180");
  while (1) {}
  }
}
  
void loop() {
  Serial.print("Temperature = ");
  Serial.print(bmp.readTemperature());
  Serial.println(" *C");
    
  Serial.print("Pressure = ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");
 
  Serial.println();
  delay(500);
}



//  Connections

VCC      Connect with 3V3 PIN of the ESP32
GND      Connect with GND of the ESP32
SCL      Connect with GPIO PIN 22
SDA      Connect with GPIO PIN 21
