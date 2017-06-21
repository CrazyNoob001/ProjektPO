#include "humiditysensor.hh"
#include <QDebug>

HumiditySensor::HumiditySensor() :
    FileInputSensor(FILE_NAME)
{
}

const QString HumiditySensor::FILE_NAME ="humidity_source_data.txt";
