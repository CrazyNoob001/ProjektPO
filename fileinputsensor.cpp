#include "fileinputsensor.hh"
#include <QDebug>

FileInputSensor::FileInputSensor(const QString fileName)
{
    m_file = new QFile(fileName);
}

void FileInputSensor::init()
{
    m_file->open(QIODevice::ReadOnly | QIODevice::Text);
}

bool FileInputSensor::isOk()
{
    return m_file->isOpen();
}

double FileInputSensor::readValue()
{
    QString line = m_file->readLine();
    line.truncate(line.length()-1);
    return line.toDouble();
}

FileInputSensor::~FileInputSensor()
{
   delete m_file;
}
