#include "statuscommand.hh"
#include <QDebug>
StatusCommand::StatusCommand(Sensor *sensor) :
    Command(sensor)
{

}

void StatusCommand::execute()
{
    if(m_sensor != nullptr)
    {
        m_ok = m_sensor->isOk();
    }
    else
    {
        m_ok = false;
    }
}

bool StatusCommand::ok() const
{
    return m_ok;
}
