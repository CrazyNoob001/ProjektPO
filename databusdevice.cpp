#include "databusdevice.hh"

DataBusDevice::DataBusDevice(int address = -1)
{

}

int DataBusDevice::address() const
{
    return m_address;
}

void DataBusDevice::setAddress(int address)
{
    m_address = address;
}
