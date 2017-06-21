#ifndef PRESSURESENSOR_HH
#define PRESSURESENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>
#include "fileinputsensor.hh"

class PressureSensor : public FileInputSensor
{
public:
    PressureSensor();

private:
    static const QString FILE_NAME;
};

#endif // PRESSURESENSOR_HH
