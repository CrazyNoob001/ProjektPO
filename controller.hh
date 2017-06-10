#ifndef CONTROLLER_HH
#define CONTROLLER_HH

#include "databusdevice.hh"

class Controller
{
public:
    Controller();
    void receiveCmd(int, const QString &cmd);
};

#endif // CONTROLLER_HH
