#include "windsensor.hh"
#include <QDebug>

WindSensor::WindSensor()
{
    m_file = new QFile(FILE_NAME);
}

void WindSensor::init()
{
    m_file->open(QIODevice::ReadOnly | QIODevice::Text);
}

bool WindSensor::isOk()
{
    return m_file->isOpen();
}

double WindSensor::readValue()
{
    QString line = m_file->readLine();
    line.truncate(line.length()-1);
    return line.toDouble();
}

WindSensor::~WindSensor()
{
    delete m_file;
}
