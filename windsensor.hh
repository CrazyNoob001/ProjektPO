#ifndef WINDSENSOR_HH
#define WINDSENSOR_HH

#include "sensor.hh"
#include <QString>
#include <QFile>

class WindSensor : public Sensor
{
public:
    WindSensor();
    void init();
    bool isOk();
    double readValue();
    ~WindSensor();

private:
    const QString FILE_NAME = "wind_source_data.txt";
    QFile* m_file;
};

#endif // WINDSENSOR_HH
