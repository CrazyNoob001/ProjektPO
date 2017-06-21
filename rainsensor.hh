#ifndef RAINSENSOR_HH
#define RAINSENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>

class RainSensor : public Sensor
{
public:
    RainSensor();
    void init();
    bool isOk();
    double readValue();
    ~RainSensor();
    RainSensor& operator =(const RainSensor&)=delete;
    RainSensor(const RainSensor&)=delete;

private:
    const QString FILE_NAME = "rain_source_data.txt";
    QFile* m_file;
};

#endif // RAINSENSOR_HH
