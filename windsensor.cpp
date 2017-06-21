#include "windsensor.hh"

WindSensor::WindSensor() :
    FileInputSensor(FILE_NAME)
{
}

const QString WindSensor::FILE_NAME = "wind_source_data.txt";
