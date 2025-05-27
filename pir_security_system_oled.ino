#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET     -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int pirPin = 2;     // PIR Sensor output
const int ledPin = 13;    // LED pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  // Initialize OLED
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("OLED failed"));
    for(;;);
  }
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 20);
  display.println("Security System Ready");
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  int motionState = digitalRead(pirPin);

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);

    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 20);
    display.println("Motion!");
    display.display();

    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(20, 25);
    display.println("All Clear");
    display.display();
  }

  delay(500);
}
