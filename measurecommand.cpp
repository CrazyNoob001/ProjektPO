#include "measurecommand.hh"

MeasureCommand::MeasureCommand(Sensor *sensor) :
    Command(sensor)
{

}

void MeasureCommand::execute()
{
    if(m_sensor != nullptr)
        m_value = m_sensor->readValue();
}

double MeasureCommand::value() const
{
    return m_value;
}
