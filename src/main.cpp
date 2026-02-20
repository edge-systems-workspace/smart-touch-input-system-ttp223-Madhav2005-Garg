#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 */

#define TOUCH_PIN 2
int touchState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(TOUCH_PIN, INPUT);
    Serial.println("TTP223 Touch Detection System - Initialized");
    delay(1000);
}

void loop() {
    touchState = digitalRead(TOUCH_PIN);

    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    // Prevents serial buffer overflow and improves readability
    delay(300);
}