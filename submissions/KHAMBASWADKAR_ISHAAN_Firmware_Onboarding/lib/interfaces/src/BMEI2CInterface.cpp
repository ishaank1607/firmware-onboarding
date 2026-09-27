#include "BMEI2CInterface.h"

bool BMEI2CInterface::begin()
{
    return _bme.begin(BMEConstants::BME280_I2C_ADDR);
}

void BMEI2CInterface::update()
{
    _temperatureC = _bme.readTemperature();
}


float BMEI2CInterface::getTemperature() const 
{
    return _temperatureC;    
}