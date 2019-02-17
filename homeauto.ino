/*
  ssid is the WiFi name.
  pass is the Password.
  auth is the authentication token provided by the Blynk App.
*/
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "5829f3072cd04b678dab2a68085b263d";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Sudh";
char pass[] = "abcd1234";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
