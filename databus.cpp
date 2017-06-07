#include "databus.hh"

DataBus::DataBus()
{

}

void DataBus::setMaster(DataBusDevice *device)
{
    m_master = device;
}

void DataBus::addSlave(DataBusDevice *device)
{
    if(device != nullptr)
        m_slaves.append(device);
}

void DataBus::removeSlave(DataBusDevice *device)
{
    m_slaves.removeAll(device);
}
