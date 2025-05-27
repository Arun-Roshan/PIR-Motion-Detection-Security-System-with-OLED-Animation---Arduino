# PIR Motion Detection Security System with OLED Animation - Arduino

This project demonstrates a basic yet modern **security system** using an Arduino Uno, **PIR motion sensor**, **external LED**, and **OLED display** with animated alert messages.

## 🔧 Components Used
- Arduino Uno
- PIR Motion Sensor (HC-SR501)
- 0.96" OLED Display (I2C - SSD1306)
- LED (External)
- Resistor (220Ω for LED)
- Breadboard + Jumper Wires

## 🧠 How It Works
- When **motion is detected**, an "INTRUDER" alert **slides in** with a flashing OLED pulse effect.
- If no motion is detected for **2 seconds**, it displays "**All Clear**".
- LED turns ON during motion detection.

## ⚡ Circuit Connections

| Component      | Arduino Pin |
|----------------|-------------|
| PIR Sensor VCC | 5V          |
| PIR Sensor GND | GND         |
| PIR Sensor OUT | D2          |
| OLED VCC       | 5V          |
| OLED GND       | GND         |
| OLED SDA       | A4          |
| OLED SCL       | A5          |
| LED (+)        | D13         |
| LED (-)        | GND via 220Ω|



## 💻 Project Images
![20250526_123239](https://github.com/user-attachments/assets/87f19212-ab00-4e7a-8d6c-205a69ee31cd)
![20250526_123228](https://github.com/user-attachments/assets/2e2b48de-451b-4aa5-8f2f-0e83074038e5)
![20250526_123321](https://github.com/user-attachments/assets/c1f2d217-a0ec-4912-aa63-8ef66b9f8506)


## 📦 Required Libraries
- [Adafruit SSD1306](https://github.com/adafruit/Adafruit_SSD1306)
- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library)

> Install via Arduino Library Manager.

## 🎬 Demo
https://youtube.com/playlist?list=PLCunr9vGjj8oaYxODopIcF4ykctgp9na7&si=jKz6I7bWvrKzDPXv

