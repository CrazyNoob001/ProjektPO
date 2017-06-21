#ifndef INITCOMMAND_HH
#define INITCOMMAND_HH

#include "command.hh"

class InitCommand : public Command
{
public:
    InitCommand(Sensor * sensor = nullptr);
    void execute();
};

#endif // INITCOMMAND_HH
