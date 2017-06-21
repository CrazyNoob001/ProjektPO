#ifndef DATABUSDEVICE_HH
#define DATABUSDEVICE_HH
#include <QString>
#include <QDebug>

class DataBusDevice
{
public:
    DataBusDevice(int address = -1);
    virtual void receiveCmd(int, const QString & cmd) = 0;
    virtual void test(){ qDebug() << "Hej, jestem:" << m_address; }


    int address() const;
    void setAddress(int address);
private:
    int m_address;
};

#endif // DATABUSDEVICE_HH
