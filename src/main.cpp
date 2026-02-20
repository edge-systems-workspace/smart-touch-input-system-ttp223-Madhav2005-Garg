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
// ... setup code from above ...

void loop() {
    // Read digital value from touch sensor
    touchState = digitalRead(TOUCH_PIN);

    // Conditional logic for state reporting
    if (touchState == HIGH) {
        Serial.println("Status: Touch Detected");
    } else {
        Serial.println("Status: No Touch");
    }
}