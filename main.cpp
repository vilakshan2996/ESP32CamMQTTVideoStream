
#include "soc/soc.h" //disable brownout problems
#include "soc/rtc_cntl_reg.h"  //disable brownout problems
#include "esp_camera.h"

#include "camera.h"
#include "mqtt.h"
#include "wifi_setup.h"
#include "config.h"
#include "server_setup.h"

bool motionSensorFlag = true;



#define PIR 13 // Define GPIOs


void setup(void) {
  Serial.begin(115200);
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);    // Disable brownout detector
  setupCamera();
  setupWiFi();
  setupServer();
  setupMQTT();
  pinMode(PIR, INPUT);

}

void loop(void) {
  if (!mqttClient.connected()) {
    setupMQTT();
  }
  mqttClient.loop();
  if(digitalRead(PIR) == LOW){
     
        Serial.println("0");
    
  }
  if(motionSensorFlag){   
    

    if(digitalRead(PIR) == HIGH){
        captureAndPublishImage();
        delay(10000);}
    if(digitalRead(PIR) == LOW){
     
        Serial.println("Aiya Jaaly");
    }
  }
 
}


