#include "databusdevice.hh"
#include <QDebug>
DataBusDevice::DataBusDevice(int address):
    m_address(address)
{
    qDebug() << "from device:" << address;
}

int DataBusDevice::address() const
{
    return m_address;
}

void DataBusDevice::setAddress(int address)
{
    m_address = address;
}
