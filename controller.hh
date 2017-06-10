#ifndef CONTROLLER_HH
#define CONTROLLER_HH

#include "databusdevice.hh"

class Controller : public DataBusDevice
{
public:
    Controller();
    void receiveCmd(int, const QString &cmd);
    void test(){ qDebug() << "Hej, jestem controllerem:" << address(); }
};

#endif // CONTROLLER_HH
