QT += core gui

TARGET = easys 
TEMPLATE = lib

SOURCES += \  
    grabber.cpp
HEADERS  += \  
    grabber.h

target.path += /usr/local/lib
INSTALLS += target
