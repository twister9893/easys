QT += core gui xml

TARGET = ceasys 
TEMPLATE = app 

SOURCES += \  
    main.cpp
#HEADERS  += \

INCLUDEPATH += ../
LIBS += -L/usr/local/lib -leasys

target.path += /usr/local/bin
INSTALLS += target
