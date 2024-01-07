#include "mqtt.h"
#include <WiFiClientSecure.h>
#include <WebSerial.h>
#include <config.h>
#include "wifi_setup.h"


PubSubClient mqttClient(wifiClient);

void setupMQTT() {
  mqttClient.setBufferSize(50*1024);
  mqttClient.setServer(mqttServer, mqttPort);
//   mqttClient.setCallback(callback);
  while (!mqttClient.connected()) {
    WebSerial.print("Attempting MQTT connection...");
    if (mqttClient.connect("ESP32Client","vilakshan29","Selva1969")) {
      WebSerial.println("Connected to MQTT broker");
    } else {
      WebSerial.print("Failed, rc=");
      WebSerial.print(mqttClient.state());
      WebSerial.println(" Retrying in 5 seconds...");
      delay(5000);
    }
  }
}


void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}


void reconnectMQTT() {
  
}
