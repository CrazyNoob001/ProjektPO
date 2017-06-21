#ifndef STATUSCOMMAND_HH
#define STATUSCOMMAND_HH

#include "command.hh"

class  StatusCommand: public Command
{
public:
    StatusCommand(Sensor * sensor = nullptr);
    void execute();

    bool ok() const;

private:
    bool m_ok = false;
};

#endif // STATUSCOMMAND_HH
