#include "mainwindow.hh"
#include <QApplication>
#include "databus.hh"
#include "tempsensor.hh"
#include "controller.hh"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*MainWindow w;
    w.show();*/
   // DataBus dataBus;
    DataBus databus;
    Controller controller(50);
    databus.setMaster(&controller);
    for(int i = 0 ; i < 5; ++i)
    {
        databus.addSlave(new TempSensor(i));
    }
    databus.callTestOnSlaves();
    return a.exec();
}
