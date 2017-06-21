#ifndef HUMIDITYSENSOR_HH
#define HUMIDITYSENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>
#include <fileinputsensor.hh>

class HumiditySensor : public FileInputSensor
{
public:
    HumiditySensor();
private:
    static const QString FILE_NAME;
};

#endif // HUMIDITYSENSOR_HH
