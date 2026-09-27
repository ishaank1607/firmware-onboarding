#include "LEDcontroller.h"

LEDcontroller::LEDcontroller(uint8_t pin) {

    _ledPin = pin;
    pinMode(pin,OUTPUT);
    _lastToggleTime = 0;
    _ledState = false;

};

void LEDcontroller::update(float temperatureC) {

    float temp_ratio = ( temperatureC  - BMEConstants::TEMP_MIN_C )/ ( BMEConstants::TEMP_MAX_C - BMEConstants::TEMP_MIN_C );
    float led_period = (BMEConstants::BLINK_PERIOD_MAX_MS) + (temp_ratio * (BMEConstants::BLINK_PERIOD_MIN_MS - BMEConstants::BLINK_PERIOD_MAX_MS) );

    unsigned long toggle_time = millis( );

    if ( toggle_time - _lastToggleTime >= static_cast<unsigned long>(led_period) ) {
        _ledState = !_ledState;
        digitalWrite(_ledPin, _ledState);
        _lastToggleTime = toggle_time;
    }

};