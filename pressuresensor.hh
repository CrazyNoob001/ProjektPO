#ifndef PRESSURESENSOR_HH
#define PRESSURESENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>

class PressureSensor : public Sensor
{
public:
    PressureSensor();
    double readValue();
    void init();
    bool isOk();
    ~PressureSensor();

private:
    const QString FILE_NAME = "pressure_source_data.txt";
    QFile* m_file;
};

#endif // PRESSURESENSOR_HH
