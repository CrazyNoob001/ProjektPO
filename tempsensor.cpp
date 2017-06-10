#include "tempsensor.hh"
#include <QDebug>

TempSensor::TempSensor(int address) :
    Sensor(address)
{
}

bool TempSensor::readValue()
{
    return false;
}
