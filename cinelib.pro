#-------------------------------------------------
#
# Project created by QtCreator 2016-11-26T23:02:47
#
#-------------------------------------------------

QT       -= gui

TARGET = cinelib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += cinelib.cpp \
    lut1d.cpp \
    lut3d.cpp \
    lutconvertor.cpp \
    lutformat.cpp \
    camerasensor.cpp

HEADERS += cinelib.h \
    lut1d.h \
    lut3d.h \
    lutconvertor.h \
    lutformat.h \
    camerasensor.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
