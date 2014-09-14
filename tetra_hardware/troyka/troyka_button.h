#ifndef TROYKA_BUTTON_H
#define TROYKA_BUTTON_H

#include "troyka.h"
#include <inttypes.h>
#include <arduino.h>



class troykaButton : public troyka
{

public:
    
    troykaButton(uint8_t pin) : troyka(pin);
    
    void init() {
        pinMode(_pin, INPUT);
    }
    
    bool isDown() {
        return !digitalRead(_pin);
    }
    
private:
    
}

#endif
