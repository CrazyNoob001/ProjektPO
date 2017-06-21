#ifndef RAINSENSOR_HH
#define RAINSENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>
#include "fileinputsensor.hh"

class RainSensor : public FileInputSensor
{
public:
    RainSensor();

private:
    static const QString FILE_NAME;
};

#endif // RAINSENSOR_HH
