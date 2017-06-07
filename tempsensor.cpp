#include "tempsensor.hh"
#include <QDebug>

TempSensor::TempSensor(int address) :
    Sensor(address)
{
    qDebug() << "from tempSensor:" << address;
}

bool TempSensor::readValue()
{
    return false;
}
