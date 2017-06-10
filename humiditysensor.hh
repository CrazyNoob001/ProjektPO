#ifndef HUMIDITYSENSOR_HH
#define HUMIDITYSENSOR_HH
#include "sensor.hh"
#include <QString>
#include <QFile>

class HumiditySensor : public Sensor
{
public:
    HumiditySensor();
    double readValue();
    void init();
    bool isOk();
    ~HumiditySensor();

private:
    const QString FILE_NAME = "humidity_source_data.txt";
    QFile* m_file;
};

#endif // HUMIDITYSENSOR_HH
