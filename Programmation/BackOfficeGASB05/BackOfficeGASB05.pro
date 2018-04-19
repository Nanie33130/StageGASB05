#-------------------------------------------------
#
# Project created by QtCreator 2018-01-15T16:25:06
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BackOfficeGASB05
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    connexion.cpp \
    option.cpp \
    ajoutbdd.cpp \
    errorbdd.cpp \
    aproposde.cpp

HEADERS  += mainwindow.h \
    connexion.h \
    option.h \
    ajoutbdd.h \
    errorbdd.h \
    aproposde.h

FORMS    += mainwindow.ui \
    connexion.ui \
    option.ui \
    ajoutbdd.ui \
    errorbdd.ui \
    aproposde.ui

RESOURCES += \
    img.qrc
