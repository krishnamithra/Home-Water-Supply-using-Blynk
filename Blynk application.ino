#define BLYNK_PRINT Serial  
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>  
  
char auth[] = "SbZhotH6_xGoHLr9kv4CxEZMu-uV60ou"; // the auth code that you got on your gmail and Blynk app  
char ssid[] = "Subbu"; // username or ssid of your WI-FI  
char pass[] = "22982025"; // password of your Wi-Fi  
  
void setup()  
{  
// Debug console  
Serial.begin(9600);  
pinMode(D0,OUTPUT); //extend these to D8 if you are using a 8 pin relay  
pinMode(D1,OUTPUT);  
pinMode(D2,OUTPUT);  
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D7,OUTPUT);  
   
digitalWrite(D0,HIGH); // Make it low if you want everything to go off  
digitalWrite(D1,HIGH); // in case of a power cut  
digitalWrite(D2,HIGH);  
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);  
Blynk.begin(auth, ssid, pass);  
}  
  
void loop()  
{  
Blynk.run();  
}  
