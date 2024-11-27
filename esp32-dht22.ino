#include "DHT.h"
#define DHT22PIN 15
DHT dht(DHT22PIN, DHT22);

void setup() {
  pinMode(15, OUTPUT);
   Serial.begin(115200);
  dht.begin();
}

void loop() {

  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Humi=" + String(humi)+"%");
  Serial.print("Temp=" + String(temp)+"C°");
  Serial.println("---");
  delay(2000);

}