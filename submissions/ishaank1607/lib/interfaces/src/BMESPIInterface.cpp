#include "BMESPIInterface.h"

BMESPIInterface::BMESPIInterface() : _bme(BMEConstants::BME280_SPI_CS_PIN) { }

bool BMESPIInterface::begin() {
    return _bme.begin( );
 }

 void BMESPIInterface::update()
{
    _temperatureC = _bme.readTemperature();
}


float BMESPIInterface::getTemperature() const 
{
    return _temperatureC;    
}