#ifndef COMMAND_HH
#define COMMAND_HH

#include "sensor.hh"

class Command
{
public:
    Command(Sensor * sensor = nullptr);
    virtual void execute() = 0;

    Sensor *sensor() const;
    void setSensor(Sensor *sensor);

    virtual ~Command();

protected:
    Sensor* m_sensor;
};

#endif // COMMAND_HH
