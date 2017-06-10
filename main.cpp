#include "mainwindow.hh"
#include <QApplication>
#include "databus.hh"
#include "tempsensor.hh"
#include "controller.hh"
#include "humiditysensor.hh"
#include "initcommand.hh"
#include "statuscommand.hh"
#include "measurecommand.hh"
#include "windsensor.hh"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Controller controller;
    QList<Sensor*> sensors;
        sensors.append(new WindSensor());
        sensors.append(new HumiditySensor());

    for(Sensor* sensor : sensors)
    {
        Command* cmd = new InitCommand(sensor);
        cmd->execute();
        delete cmd;
        cmd = new StatusCommand(sensor);
        cmd->execute();
        qDebug() << (dynamic_cast<StatusCommand*>(cmd))->ok();
        delete cmd;
        cmd = new MeasureCommand(sensor);
        cmd->execute();
        qDebug() << (dynamic_cast<MeasureCommand*>(cmd))->value();
        delete cmd;
    }


    for(Sensor* sensor : sensors)
    {
        sensors.removeAll(sensor);
        delete sensor;
    }

    return a.exec();
}
