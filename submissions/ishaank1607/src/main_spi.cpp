#include <Arduino.h> 
#include "BMESPIInterface.h"
#include "LEDcontroller.h"
#include "BMEConstants.h"

LEDcontroller ledController(BMEConstants::LED_PIN);

void setup( ) {
    Serial.begin(115200);
    if ( !BMESPIInterfaceInstance::instance().begin() ) {
        Serial.println("Could not find valid BME280 sensor, check wiring");
    }
    
}

void loop( ) {
    BMESPIInterfaceInstance::instance().update();
    float temperature;
    temperature = BMESPIInterfaceInstance::instance().getTemperature();
    ledController.update(temperature);
}