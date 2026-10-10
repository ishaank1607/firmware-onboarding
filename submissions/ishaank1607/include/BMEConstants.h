#pragma once
#include <Arduino.h>

namespace BMEConstants {
 constexpr uint8_t BME280_I2C_ADDR = 0x76;
 constexpr uint8_t BME280_SPI_CS_PIN = 10;
 constexpr uint8_t LED_PIN = 13;
 constexpr float TEMP_MIN_C = 27.0f;   
 constexpr float TEMP_MAX_C = 29.0f; 
 constexpr float BLINK_PERIOD_MAX_MS = 1500;  
 constexpr float BLINK_PERIOD_MIN_MS = 150;  

}