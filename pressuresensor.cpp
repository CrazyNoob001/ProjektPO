#include "pressuresensor.hh"

PressureSensor::PressureSensor()
{
    m_file = new QFile(FILE_NAME);
}

double PressureSensor::readValue()
{
    return 3;
}

void PressureSensor::init()
{
    m_file->open(QIODevice::ReadOnly | QIODevice::Text);
}

bool PressureSensor::isOk()
{
    return m_file->isOpen();
}

PressureSensor::~PressureSensor()
{
    delete m_file;
}
