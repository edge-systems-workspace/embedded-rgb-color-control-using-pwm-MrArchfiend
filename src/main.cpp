#include <Arduino.h>

// TODO 1: Define RED pin (Use 9)
const int RED_PIN = 9;

// TODO 2: Define GREEN pin (Use 10)
const int GREEN_PIN = 10;

// TODO 3: Define BLUE pin (Use 11)
const int BLUE_PIN = 11;

void setup() {

    // TODO 4: Initialize Serial communication (9600 baud)
    Serial.begin(9600);

    // TODO 5: Configure RGB pins as OUTPUT
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    // TODO 6: Print initialization message
    Serial.println("======================================");
    Serial.println(" Embedded RGB LED Control System ");
    Serial.println("======================================");
}
}

void loop() {

    // -------- DIGITAL MODE --------

    Serial.println("Digital Mode: Red ON");
    
    // TODO 7: Turn ON red (digital HIGH)
    digitalWrite(RED_PIN, HIGH);
    delay(1000);

    // TODO 8: Turn OFF red
    digitalWrite(RED_PIN, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    Serial.println("PWM Mode: Color Transition");

    // TODO 9: Set RED brightness using analogWrite()
    analogWrite(RED_PIN, 255);   // Full brightness
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
    delay(1000);

    // TODO 10: Set GREEN brightness using analogWrite()
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255);
    analogWrite(BLUE_PIN, 0);
    delay(1000);

    // TODO 11: Set BLUE brightness using analogWrite()
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255);
    delay(1000);

    // TODO 12: Add delay for visible transition
    analogWrite(RED_PIN, 128);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 128);   // Purple mix
    delay(1000);

    Serial.println("------------------------------");
}
