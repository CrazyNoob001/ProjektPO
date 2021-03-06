#ifndef CONTROLLER_HH
#define CONTROLLER_HH

#include "databusdevice.hh"
#include "commandset.hh"
#include <QTimer>

class Controller : public QObject
{
    Q_OBJECT 
public:
    Controller();
    void receiveCmd(int, const QString &cmd);

    QMap<QString, CommandSet> commands() const;
    void setCommands(const QMap<QString, CommandSet> &commands);

    void run();

signals:
   
    void tempChanged(double);
    void humidityChanged(double);
    void rainChanged(double);
    void windChanged(double);
    void pressureChanged(double);

    void tempStateChanged(bool);
    void humidityStateChanged(bool);
    void rainStateChanged(bool);
    void windStateChanged(bool);
    void pressureStateChanged(bool);

    void alarm(bool);

private:
    QMap<QString, CommandSet> m_commands;
    QMap<QString, double> m_values;
    QMap<QString, bool> m_state;
    QTimer m_timer;

private slots:
    void timeOut();
};

#endif // CONTROLLER_HH
