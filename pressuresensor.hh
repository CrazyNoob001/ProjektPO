#ifndef PRESSURESENSOR_HH
#define PRESSURESENSOR_HH
#include "sensor.hh"

class PressureSensor : public Sensor
{
public:
    PressureSensor(int address = -1);
    bool readValue();
    virtual void test(){ qDebug() << "Hej, jestem press:" << address(); }
};

#endif // PRESSURESENSOR_HH
