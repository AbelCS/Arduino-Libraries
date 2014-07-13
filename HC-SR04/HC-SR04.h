#ifndef HCSR04_H
#define HCSR04_H

class RangeSensor
{
private:
    uint8_t triggerPin;
    uint8_t echoPin;
    
public:
    RangeSensor(uint8_t, uint8_t);
    /**
     * Returns distance in cm, 0 means out of range (>400cm)
     */
    unsigned long getDistance();   
};

#endif