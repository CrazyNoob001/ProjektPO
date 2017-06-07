#ifndef TEMPSENSOR_HH
#define TEMPSENSOR_HH
#include "sensor.hh"

class TempSensor : public Sensor
{
public:
    TempSensor();
    bool readValue();
};

#endif // TEMPSENSOR_HH
