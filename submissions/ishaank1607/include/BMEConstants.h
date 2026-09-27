#pragma once
#include <Arduino.h>

namespace BMEConstants {
 constexpr uint8_t BME280_I2C_ADDR = 0x77;
 constexpr uint8_t BME280_SPI_CS_PIN = 10;
 constexpr uint8_t LED_PIN = 9;
 constexpr float TEMP_MIN_C = 15.0f;   
 constexpr float TEMP_MAX_C = 40.0f; 
 constexpr uint16_t BLINK_PERIOD_MAX_MS = 1500;  
 constexpr uint16_t BLINK_PERIOD_MIN_MS = 150;  

}