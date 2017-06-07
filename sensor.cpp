#include "sensor.hh"

Sensor::Sensor(int address) :
    DataBusDevice(address)
{

}

void Sensor::receiveCmd(int, const QString &cmd)
{

}
