#ifndef TROYKA_H
#define TROYKA_H

#include <inttypes.h>



class troyka 
{

public:
    
    troyka(uint8_t pin) {
        _pin=pin;
    }
    
    void init();
    
private:

    uint8_t _pin;    
    
}

#endif
