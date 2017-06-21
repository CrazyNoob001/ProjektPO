#include "mainwindow.hh"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->alarm->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::humidityUpdate(double value)
{
    ui->humValue->setText(QString::number(value));
}

void MainWindow::rainUpdate(double value)
{
    ui->rainValue->setText(QString::number(value));
}

void MainWindow::windUpdate(double value)
{
    ui->windValue->setText(QString::number(value));
}

void MainWindow::pressureUpdate(double value)
{
    ui->pressureValue->setText(QString::number(value));
}

void MainWindow::tempUpdate(double value)
{
    ui->tempValue->setText(QString::number(value));
}

void MainWindow::humidityStateUpdate(bool state)
{
    if(!state)
        ui->humValue->setText("fail");
}

void MainWindow::rainStateUpdate(bool state)
{
    if(!state)
        ui->rainValue->setText("fail");
}

void MainWindow::windStateUpdate(bool state)
{
    if(!state)
        ui->windValue->setText("fail");
}

void MainWindow::pressureStateUpdate(bool state)
{
    if(!state)
        ui->pressureValue->setText("fail");
}

void MainWindow::tempStateUpdate(bool state)
{
    if(!state)
        ui->tempValue->setText("fail");
}

void MainWindow::alarmState(bool state)
{
    ui->alarm->setVisible(state);
}
