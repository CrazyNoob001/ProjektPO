#include "pressuresensor.hh"

PressureSensor::PressureSensor() :
    FileInputSensor(FILE_NAME)
{
}

const QString PressureSensor::FILE_NAME = "pressure_source_data.txt";
