#ifndef WINDSENSOR_HH
#define WINDSENSOR_HH

#include "sensor.hh"
#include <QString>
#include <QFile>
#include "fileinputsensor.hh"

class WindSensor : public FileInputSensor
{
public:
    WindSensor();

private:
    static const QString FILE_NAME;
};

#endif // WINDSENSOR_HH
