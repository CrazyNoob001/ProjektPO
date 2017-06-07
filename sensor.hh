#ifndef SENSOR_HH
#define SENSOR_HH

#include "databusdevice.hh"

class Sensor : public DataBusDevice
{
public:
    Sensor(int address = -1);
    void receiveCmd(int, const QString & cmd);
    virtual bool readValue() = 0;
};

#endif // SENSOR_HH
