#include <WiFi.h>
const char *SSID="Tenda_457";
const char *password="Ancy2018";
WiFiServer server(80);

String header; // string to store header
String output2state="off";
const int LED=2;

void setup(){
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  digitalWrite(LED,LOW); //initially the internal led is turned off

  Serial.println("Connecting to :");
  Serial.println(SSID);
  WiFi.begin(SSID,password);
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Wifi Connected. Local IP address:");
  Serial.println(WiFi.localIP());
  server.begin();

}

