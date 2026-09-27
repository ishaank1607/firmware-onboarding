#pragma once
#include <Arduino.h>
#include "BMEConstants.h"

class LEDcontroller {

    private:
        uint8_t _ledPin;
        unsigned long _lastToggleTime;
        bool _ledState;
    public:
        LEDcontroller(uint8_t pin);
        void update(float temperatureC);

};