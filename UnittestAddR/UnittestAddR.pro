QT += testlib widgets core
#QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_addr.cpp \
    ../scircle.cpp

HEADERS += \
    ../scircle.h
