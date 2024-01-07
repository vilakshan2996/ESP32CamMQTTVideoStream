#ifndef CAMERA_H
#define CAMERA_H

#include <esp_camera.h>

extern bool motionSensorFlag;
extern const char* mqttTopic;



void setupCamera();
void captureAndPublishImage();

#endif
