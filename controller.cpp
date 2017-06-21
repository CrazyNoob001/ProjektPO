#include "controller.hh"
#include <QMap>
#include <QTimer>

Controller::Controller()
{

}

QMap<QString, CommandSet> Controller::commands() const
{
    return m_commands;
}

void Controller::setCommands(const QMap<QString, CommandSet> &commands)
{
    m_commands = commands;
    for(auto key : m_commands.keys())
    {
        m_values.insert(key, 0);
        m_state.insert(key, false);
    }
}

void Controller::run()
{
    for(QString key : m_commands.keys())
    {
        m_commands[key].initCmd().execute();
        m_commands[key].statusCmd().execute();
        m_state[key] = m_commands[key].statusCmd().ok();
    }
    emit humidityStateChanged(m_state["hum1"]);
    emit pressureStateChanged(m_state["pressure1"]);
    emit rainStateChanged(m_state["rain1"]);
    emit tempStateChanged(m_state["temp1"]);
    emit windStateChanged(m_state["wind1"]);

    connect(&m_timer, SIGNAL(timeout()), this, SLOT(timeOut()));
    m_timer.setInterval(1000);
    m_timer.start();
}

void Controller::timeOut()
{
    for(QString key : m_commands.keys())
    {
        m_commands[key].measureCmd().execute();
        m_commands[key].statusCmd().execute();

        m_values[key] = m_commands[key].measureCmd().value();
        m_state[key] = m_commands[key].statusCmd().ok();
    }
    emit humidityChanged(m_values["hum1"]);
    emit pressureChanged(m_values["pressure1"]);
    emit rainChanged(m_values["rain1"]);
    emit tempChanged(m_values["temp1"]);
    emit windChanged(m_values["wind1"]);

    emit humidityStateChanged(m_state["hum1"]);
    emit pressureStateChanged(m_state["pressure1"]);
    emit rainStateChanged(m_state["rain1"]);
    emit tempStateChanged(m_state["temp1"]);
    emit windStateChanged(m_state["wind1"]);

    if(m_values["temp1"] > 30 || m_values["wind1"] > 10 )
        emit alarm(true);
    else
        emit alarm(false);
}
