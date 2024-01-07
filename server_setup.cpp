// server_setup.cpp
#include "server_setup.h"
#include <AsyncElegantOTA.h>
#include <WebSerial.h>

AsyncWebServer server(80);


void setupServer() {
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/plain", "Hi! This is a sample response.");
  });
  AsyncElegantOTA.begin(&server);
  WebSerial.begin(&server);
  WebSerial.msgCallback(recvMsg);
  server.begin();
}

void recvMsg(uint8_t *data, size_t len){
  WebSerial.println("Received Data...");
  String d = "";
  for(int i=0; i < len; i++){
    d += char(data[i]);
  }
  WebSerial.println(d);
}

