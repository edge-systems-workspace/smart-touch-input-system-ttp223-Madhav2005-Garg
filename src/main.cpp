#include <Arduino.h>

#define TOUCH_PIN 2

int touchState = 0;

// ... previous code ...

void setup() {
    Serial.begin(9600);

    // Configure touch pin as INPUT for digital reading
    pinMode(TOUCH_PIN, INPUT);

    Serial.println("TTP223 Touch Detection System - Initialized");
    delay(1000);
}

void loop() {
}