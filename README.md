# Smart-Classroom-Environment-Monitoring
# 🌍 Smart Classroom Environment Monitoring

## 📌 About the Project

Have you ever wondered whether your classroom has good air quality and a comfortable temperature? 😊

The Smart Classroom Environment Monitoring System is an interesting IoT project that helps us monitor classroom conditions easily.

In this project, we use NodeMCU ESP8266, DHT11 and MQ-135 sensors to collect environmental information.

- 🌡️ DHT11 measures classroom temperature.
- 💧 DHT11 measures humidity.
- 🌿 MQ-135 detects changes in air quality.

The NodeMCU sends the collected sensor data through Wi-Fi to the KiwisIoT platform. We can view the readings on a live dashboard from anywhere.

## 🔌 Components Used

1. NodeMCU ESP8266
2. DHT11 Temperature and Humidity Sensor (3-pin)
3. MQ-135 Air Quality Sensor

## ⚡ Step-by-Step Connections

### Step 1: Connect DHT11 to NodeMCU

| DHT11 Pin | NodeMCU Pin |
|---|---|
| VCC | 3V3 |
| DATA | D4 |
| GND | GND |

### Step 2: Connect MQ-135 to NodeMCU

| MQ-135 Pin | NodeMCU Pin |
|---|---|
| VCC | Suitable power supply as specified by the module |
| GND | GND |
| AO | A0 through a suitable voltage divider if required |

**Note:** Make sure the MQ-135 analog output voltage does not exceed your NodeMCU board's A0 input limit. Connect all grounds together.

Project Title : Smart Classroom Environment Monitoring
Project Link : https://www.hackster.io/g9961515/smart-classroom-environment-monitoring-using-kiwisiot-d1338d

## ⚙️ How It Works

1. DHT11 measures classroom temperature and humidity.
2. MQ-135 detects changes in classroom air quality.
3. NodeMCU collects the sensor readings.
4. Wi-Fi sends the data to KiwisIoT.
5. The KiwisIoT dashboard displays the readings in real time.

## 🎯 Project Goal

Our goal is to make classrooms smarter by monitoring their environment and creating awareness about healthy learning spaces.

**Learn IoT, explore sensors and build a smarter classroom! 🚀**
