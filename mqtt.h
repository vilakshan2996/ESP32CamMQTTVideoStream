#ifndef MQTT_H
#define MQTT_H

#include <PubSubClient.h>

extern PubSubClient mqttClient;

void setupMQTT();
void reconnectMQTT();
void callback(char* topic, byte* payload, unsigned int length);

#endif