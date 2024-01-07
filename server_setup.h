// server_setup.h
#ifndef SERVER_SETUP_H
#define SERVER_SETUP_H

#include <ESPAsyncWebServer.h>


extern AsyncWebServer server;

void setupServer();
void recvMsg(uint8_t *data, size_t len);

#endif  // SERVER_SETUP_H
