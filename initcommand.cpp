#include "initcommand.hh"
#include <QDebug>

InitCommand::InitCommand(Sensor *sensor) :
    Command(sensor)
{

}

void InitCommand::execute()
{
    if(m_sensor != nullptr)
    {
        m_sensor->init();
    }
}
