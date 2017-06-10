#include "initcommand.hh"

InitCommand::InitCommand(Sensor *sensor) :
    Command(sensor)
{

}

void InitCommand::execute()
{
    if(m_sensor != nullptr)
        m_sensor->init();
}
