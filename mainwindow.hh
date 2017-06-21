#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void humidityUpdate(double);
    void rainUpdate(double);
    void windUpdate(double);
    void pressureUpdate(double);
    void tempUpdate(double);

    void humidityStateUpdate(bool);
    void rainStateUpdate(bool);
    void windStateUpdate(bool);
    void pressureStateUpdate(bool);
    void tempStateUpdate(bool);

    void alarmState(bool);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_HH
