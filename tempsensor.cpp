#include "tempsensor.hh"

TempSensor::TempSensor() :
    FileInputSensor(FILE_NAME)
{
}

const QString TempSensor::FILE_NAME = "temp_source_data.txt";
