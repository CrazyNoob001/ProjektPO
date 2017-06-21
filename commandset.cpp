#include "commandset.hh"

CommandSet::CommandSet(Sensor &sensor)
{
    m_initCmd.setSensor(&sensor);
    m_measureCmd.setSensor(&sensor);
    m_statusCmd.setSensor(&sensor);
}

CommandSet::CommandSet()
{

}

InitCommand &CommandSet::initCmd()
{
    return m_initCmd;
}

MeasureCommand& CommandSet::measureCmd()
{
    return m_measureCmd;
}

StatusCommand& CommandSet::statusCmd()
{
    return m_statusCmd;
}
