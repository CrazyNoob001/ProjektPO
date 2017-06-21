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
#include "rainsensor.hh"
#include "pressuresensor.hh"
#include "commandset.hh"
#include "tempsensor.hh"
#include <QMap>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    HumiditySensor hum1Sensor;
    PressureSensor pressure1Sensor;
    RainSensor rain1Sensor;
    TempSensor temp1Sensor;
    WindSensor wind1Sensor;

    QMap<QString, CommandSet> commands;
    commands.insert("hum1", CommandSet(hum1Sensor));
    commands.insert("pressure1", CommandSet(pressure1Sensor));
    commands.insert("rain1", CommandSet(rain1Sensor));
    commands.insert("temp1", CommandSet(temp1Sensor));
    commands.insert("wind1", CommandSet(wind1Sensor));

    Controller controller;
    controller.setCommands(commands);

    QObject::connect(&controller, SIGNAL(humidityChanged(double)), &w, SLOT(humidityUpdate(double)));
    QObject::connect(&controller, SIGNAL(rainChanged(double)), &w, SLOT(rainUpdate(double)));
    QObject::connect(&controller, SIGNAL(windChanged(double)), &w, SLOT(windUpdate(double)));
    QObject::connect(&controller, SIGNAL(pressureChanged(double)), &w, SLOT(pressureUpdate(double)));
    QObject::connect(&controller, SIGNAL(tempChanged(double)), &w, SLOT(tempUpdate(double)));

    QObject::connect(&controller, SIGNAL(humidityStateChanged(bool)), &w, SLOT(humidityStateUpdate(bool)));
    QObject::connect(&controller, SIGNAL(rainStateChanged(bool)), &w, SLOT(rainStateUpdate(bool)));
    QObject::connect(&controller, SIGNAL(windStateChanged(bool)), &w, SLOT(windStateUpdate(bool)));
    QObject::connect(&controller, SIGNAL(pressureStateChanged(bool)), &w, SLOT(pressureStateUpdate(bool)));
    QObject::connect(&controller, SIGNAL(tempStateChanged(bool)), &w, SLOT(tempStateUpdate(bool)));

    QObject::connect(&controller, SIGNAL(alarm(bool)), &w, SLOT(alarmState(bool)));

    controller.run();

    return a.exec();
}


