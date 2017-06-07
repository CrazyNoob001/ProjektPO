#include "sensor.hh"
#include <QDebug>
Sensor::Sensor(int address) :
    DataBusDevice(address)
{
    qDebug() << "from Sensor:" << address;

}

void Sensor::receiveCmd(int, const QString &cmd)
{

}
