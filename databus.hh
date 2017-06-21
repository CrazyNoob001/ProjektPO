#ifndef DATABUS_HH
#define DATABUS_HH
#include <QList>
#include <databusdevice.hh>

class DataBus
{
public:
    DataBus();
    void setMaster(DataBusDevice* device = nullptr);
    void addSlave(DataBusDevice* device);
    void removeSlave(DataBusDevice* device);
    void callTestOnSlaves();

private:
    DataBusDevice* m_master = nullptr;
    QList<DataBusDevice*> m_slaves;
};

#endif // DATABUS_HH
