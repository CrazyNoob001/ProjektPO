#include "humiditysensor.hh"

HumiditySensor::HumiditySensor()
{
    m_file = new QFile(FILE_NAME);
}

double HumiditySensor::readValue()
{
    return 2;
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
