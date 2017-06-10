#ifndef SENSOR_HH
#define SENSOR_HH

class Sensor
{
public:
    Sensor();
    virtual void init() = 0;
    virtual bool isOk() = 0;
    virtual double readValue() = 0;
    virtual ~Sensor();
};

#endif // SENSOR_HH
