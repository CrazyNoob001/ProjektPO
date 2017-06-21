#ifndef TEMPSENSOR_HH
#define TEMPSENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>
#include "fileinputsensor.hh"

class TempSensor : public FileInputSensor
{
public:
    TempSensor();

private:
    static const QString FILE_NAME;
};

#endif // TEMPSENSOR_HH
