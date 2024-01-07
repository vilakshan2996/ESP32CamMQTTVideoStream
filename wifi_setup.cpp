#include "wifi_setup.h"
#include <WiFi.h>
#include <WebSerial.h>
#include "config.h"



WiFiClientSecure wifiClient;

void setupWiFi() {

  wifiClient.setCACert(root_ca);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}
