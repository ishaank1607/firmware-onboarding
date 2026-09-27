#include <Arduino.h> 
#include "BMEI2CInterface.h"
#include "LEDcontroller.h"
#include "BMEConstants.h"

LEDcontroller ledController(BMEConstants::LED_PIN);

void setup( ) {
    Serial.begin(115200);
    if ( !BMEI2CInterfaceInstance::instance().begin() ) {
        Serial.println("Could not find valid BME280 sensor, check wiring");
    }
    
}

void loop( ) {
    BMEI2CInterfaceInstance::instance().update();
    float temperature;
    temperature = BMEI2CInterfaceInstance::instance().getTemperature();
    ledController.update(temperature);
}