#ifndef DATABUSDEVICE_HH
#define DATABUSDEVICE_HH
#include <QString>

class DataBusDevice
{
public:
    DataBusDevice(int address);
    virtual void receiveCmd(int, const QString & cmd) = 0;

    int address() const;
    void setAddress(int address);
private:
    int m_address;
};

#endif // DATABUSDEVICE_HH
