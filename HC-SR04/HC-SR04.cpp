#include <Arduino.h>
#include <inttypes.h>
#include "HC-SR04.h"

RangeSensor::RangeSensor(uint8_t triggerPin, uint8_t echoPin) : triggerPin(triggerPin), echoPin(echoPin) 
{
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

unsigned long RangeSensor::getDistance()
{
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);

    return (pulseIn(echoPin, HIGH, 38000) / 58);
}