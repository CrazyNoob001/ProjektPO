#ifndef MEASURECOMMAND_HH
#define MEASURECOMMAND_HH

#include "command.hh"

class MeasureCommand : public Command
{
public:
    MeasureCommand(Sensor * sensor = nullptr);
    void execute();

    double value() const;

private:
    double m_value;
};

#endif // MEASURECOMMAND_HH
