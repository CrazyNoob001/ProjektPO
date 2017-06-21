#ifndef FILEINPUTSENSOR_HH
#define FILEINPUTSENSOR_HH

#include <QString>
#include <QFile>
#include "sensor.hh"

class FileInputSensor : public Sensor
{
public:
    FileInputSensor(const QString fileName);
    void init();
    bool isOk();
    double readValue();
    virtual ~FileInputSensor();
    FileInputSensor& operator =(const FileInputSensor&)=delete;
   // FileInputSensor(const FileInputSensor&)=delete;

private:
    QFile* m_file;
};

#endif // FILEINPUTSENSOR_HH
