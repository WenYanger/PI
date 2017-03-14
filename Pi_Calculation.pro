QT += core
QT -= gui

CONFIG += c++11

TARGET = Pi_Calculation
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    algorithm.cpp

HEADERS += \
    algorithm.h
