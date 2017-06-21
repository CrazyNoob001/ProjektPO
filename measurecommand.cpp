#include "measurecommand.hh"
#include <QDebug>
MeasureCommand::MeasureCommand(Sensor *sensor) :
    Command(sensor)
{

}

void MeasureCommand::execute()
{
    if(m_sensor != nullptr)
    {
        m_value = m_sensor->readValue();
    }
    else
        qDebug() << "nima";
}

double MeasureCommand::value() const
{
    return m_value;
}
