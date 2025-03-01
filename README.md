# DHT IOT Sensor with Blynk

## Overview
This project utilizes a **DHT11** temperature and humidity sensor connected to an **ESP8266** to send real-time data to **Blynk**. It allows remote monitoring of temperature and humidity through the Blynk IoT platform.

## Features
- **Temperature & Humidity Monitoring** using DHT11
- **ESP8266 Integration** for Wi-Fi connectivity
- **Blynk IoT** for real-time data visualization
- **Serial Output** for debugging

## Components Required
- **ESP8266 (NodeMCU or similar)**
- **DHT11 Sensor**
- **Jumper Wires**
- **Wi-Fi Connection**

## Circuit Diagram
```
DHT11     ESP8266
VCC   ->  3.3V
GND   ->  GND
DATA  ->  D2 (GPIO4)
```

## Setup and Installation
### 1. Install Required Libraries
Ensure you have the following libraries installed in the Arduino IDE:
- **Blynk** (`BlynkSimpleEsp8266.h`)
- **DHT Sensor Library** (`DHT.h`)

### 2. Configure Blynk
- Sign up on **[Blynk](https://blynk.io/)**
- Create a new project and note down your **AUTH TOKEN**
- Add **Virtual Pins (V0 for Temperature, V1 for Humidity)**

### 3. Upload Code
1. Replace `ssid[]` and `pass[]` with your **Wi-Fi credentials**.
2. Replace `auth[]` with your **Blynk Authentication Token**.
3. Connect the ESP8266 to your PC and upload the code via Arduino IDE.

## Code Explanation
- Initializes the **DHT11 sensor** on GPIO4 (D2)
- Connects ESP8266 to **Blynk using Wi-Fi**
- Reads **temperature and humidity** data
- Sends data to **Blynk virtual pins V0 (Temp) & V1 (Humidity)**
- Displays the values in the **Serial Monitor**

## Usage
- Open **Blynk App/Web Dashboard**
- View real-time **temperature & humidity** readings
- Monitor sensor data remotely from anywhere

## Possible Improvements
- Add **alerts/notifications** for extreme conditions
- Implement **data logging** for analysis
- Support **DHT22 sensor** for higher accuracy

## License
This project is for educational purposes. Feel free to use and modify it.

---
**Author:** Trishar Padole
**GitHub:** https://github.com/TrisharPadole
