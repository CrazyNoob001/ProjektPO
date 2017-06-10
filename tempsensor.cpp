#include "tempsensor.hh"
#include <QDebug>

TempSensor::TempSensor()
{
    m_file = new QFile(FILE_NAME);
}

double TempSensor::readValue()
{
    return 6;
}

void TempSensor::init()
{
    m_file->open(QIODevice::ReadOnly | QIODevice::Text);
}

bool TempSensor::isOk()
{
    return m_file->isOpen();
}

TempSensor::~TempSensor()
{
    delete m_file;
}
