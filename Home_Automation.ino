#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266_SSL.h>

char auth[] = "TGCWmmI_HT27xx0Uk5v66wSD9lJhKsHU";

char ssid[] = "./end";
char pass[] = "nomore@#1";

void setup()
{
  Serial.begin(9600);

  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
