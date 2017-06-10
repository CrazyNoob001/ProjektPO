#include "mainwindow.hh"
#include <QApplication>
#include "databus.hh"
#include "tempsensor.hh"
#include "controller.hh"
#include "humiditysensor.hh"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    DataBus dataBus;
    DataBus databus;
    Controller controller;
    databus.setMaster(&controller);
    QList<Sensor*> sensors;
    for(int i = 0 ; i < 5; ++i)
    {
        sensors.append(new TempSensor(i));
        databus.addSlave(sensors.last());
        sensors.append(new HumiditySensor(i+50));
        databus.addSlave(sensors.last());
    }
    databus.callTestOnSlaves();
    for(Sensor* sensor : sensors)
    {
        sensors.removeAll(sensor);
        delete sensor;
    }

    return a.exec();
}
