#include "command.hh"

Command::Command(Sensor *sensor) :
    m_sensor(sensor)
{

}

Sensor *Command::sensor() const
{
    return m_sensor;
}

void Command::setSensor(Sensor *sensor)
{
    m_sensor = sensor;
}

Command::~Command()
{

}
