#ifndef TEMPSENSOR_HH
#define TEMPSENSOR_HH
#include "sensor.hh"
#include <QDebug>
class TempSensor : public Sensor
{
public:
    TempSensor(int address);
    bool readValue();
};

#endif // TEMPSENSOR_HH
