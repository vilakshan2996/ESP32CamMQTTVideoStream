<br />
<div align="center">
  <a href="#">
    <img src="images/esp32cammqttvideostream.png" alt="Logo" width="100" height="100">
 </a>

  <h3 align="center">ESP32CamMQTTVideoStream</h3>

  <p align="center">
    ESP32CamMQTTVideoStream: Easily stream video from ESP32 cameras using WiFi and MQTT. Ideal for IoT projects, this repo simplifies video transmission for seamless integration and monitoring.
    <br />
    
   
  </p>
</div>



## Features

- Stream video from ESP32 cameras using WiFi and MQTT
- Ideal for IoT projects
- Simplifies video transmission for seamless integration and monitoring

## External Libraries

This project uses the following external libraries:

- **esp_camera**: This is a driver for the ESP32 camera. It allows you to interface with the camera module on the ESP32 board and control its various features. More details can be found in the [ESP32 Camera documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/esp_camera.html).

- **WiFiClientSecure**: This library allows the ESP32 to connect to secured WiFi networks. It's part of the WiFi library for the ESP32. More information can be found in the [Arduino WiFi documentation](https://www.arduino.cc/en/Reference/WiFi).

- **PubSubClient**: This is a client library for MQTT communication. MQTT is a lightweight messaging protocol for small sensors and mobile devices, optimized for high-latency or unreliable networks. This library allows your ESP32 to communicate with an MQTT broker. More details can be found [here](https://pubsubclient.knolleary.net/).


## Supportive Libraries 

- **WebSerial**: This library enables debugging of the ESP32 or ESP8266 over WiFi. It sets up a WebSocket server on the ESP device, allowing you to send commands or receive output from the device using a web-based serial monitor. This is particularly useful for remote debugging. More details can be found [here](https://github.com/ayushsharma82/WebSerial).

- **AsyncElegantOTA**: This library facilitates asynchronous Over The Air (OTA) updates for your ESP32 projects. It allows you to update the firmware of your ESP32 over WiFi, which is especially useful for maintaining software on devices deployed in the field. More about it can be found [here](https://github.com/ayushsharma82/AsyncElegantOTA).
