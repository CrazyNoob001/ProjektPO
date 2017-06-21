#-------------------------------------------------
#
# Project created by QtCreator 2017-06-07T20:47:17
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SymulacjaStacjiPomiarowej
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    sensor.cpp \
    tempsensor.cpp \
    controller.cpp \
    humiditysensor.cpp \
    rainsensor.cpp \
    windsensor.cpp \
    pressuresensor.cpp \
    command.cpp \
    initcommand.cpp \
    measurecommand.cpp \
    statuscommand.cpp \
    getcommand.cpp \
    commandset.cpp

HEADERS  += mainwindow.hh \
    sensor.hh \
    tempsensor.hh \
    controller.hh \
    humiditysensor.hh \
    rainsensor.hh \
    windsensor.hh \
    pressuresensor.hh \
    command.hh \
    initcommand.hh \
    measurecommand.hh \
    statuscommand.hh \
    commandset.hh

FORMS    += mainwindow.ui
