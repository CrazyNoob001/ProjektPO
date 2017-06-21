#include "pressuresensor.hh"

PressureSensor::PressureSensor()
{
    m_file = new QFile(FILE_NAME);
}

double PressureSensor::readValue()
{
    QString line = m_file->readLine();
    line.truncate(line.length()-1);
    return line.toDouble();
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
