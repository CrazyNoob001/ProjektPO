#ifndef HUMIDITYSENSOR_HH
#define HUMIDITYSENSOR_HH
#include "sensor.hh"

class HumiditySensor : public Sensor
{
public:
    HumiditySensor(int address = -1);
    bool readValue();
    virtual void test(){ qDebug() << "Hej, jestem hum:" << address(); }
};

#endif // HUMIDITYSENSOR_HH
