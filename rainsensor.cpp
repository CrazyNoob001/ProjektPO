#include "rainsensor.hh"

RainSensor::RainSensor() :
    FileInputSensor(FILE_NAME)
{
}

const QString RainSensor::FILE_NAME = "pressure_source_data.txt";
