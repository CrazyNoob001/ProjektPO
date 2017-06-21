#ifndef COMMANDSET_HH
#define COMMANDSET_HH
#include "initcommand.hh"
#include "measurecommand.hh"
#include "statuscommand.hh"

class CommandSet
{
public:
    CommandSet(Sensor& sensor);
    CommandSet();

    InitCommand& initCmd();
    MeasureCommand& measureCmd();
    StatusCommand &statusCmd();

private:
    InitCommand m_initCmd;
    MeasureCommand m_measureCmd;
    StatusCommand m_statusCmd;
};

#endif // COMMANDSET_HH
