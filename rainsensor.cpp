#include "rainsensor.hh"

RainSensor::RainSensor()
{
    m_file = new QFile(FILE_NAME);
}

void RainSensor::init()
{
    m_file->open(QIODevice::ReadOnly | QIODevice::Text);
}

bool RainSensor::isOk()
{
    return m_file->isOpen();
}

double RainSensor::readValue()
{
    return 5;
}

RainSensor::~RainSensor()
{
    delete m_file;
}
