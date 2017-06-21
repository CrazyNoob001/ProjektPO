#include "humiditysensor.hh"
#include <QDebug>

HumiditySensor::HumiditySensor()
{
    m_file = new QFile(FILE_NAME);
}

double HumiditySensor::readValue()
{
    QString line = m_file->readLine();
    line.truncate(line.length()-1);
    return line.toDouble();
}

void HumiditySensor::init()
{
    m_file->open(QIODevice::ReadOnly | QIODevice::Text);
}

bool HumiditySensor::isOk()
{
    return m_file->isOpen();
}

HumiditySensor::~HumiditySensor()
{
    delete m_file;
}

