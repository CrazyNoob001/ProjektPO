#include "tempsensor.hh"

TempSensor::TempSensor()
{
    m_file = new QFile(FILE_NAME);
}

double TempSensor::readValue()
{
    QString line = m_file->readLine();
    line.truncate(line.length()-1);
    return line.toDouble();
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
