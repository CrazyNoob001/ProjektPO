#ifndef TEMPSENSOR_HH
#define TEMPSENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>

class TempSensor : public Sensor
{
public:
    TempSensor();
    double readValue();
    void init();
    bool isOk();
    ~TempSensor();
    TempSensor& operator =(const TempSensor&)=delete;
    TempSensor(const TempSensor&)=delete;

private:
    const QString FILE_NAME = "temp_source_data.txt";
    QFile* m_file;
};

#endif // TEMPSENSOR_HH
