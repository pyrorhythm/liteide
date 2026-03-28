TARGET = acp
TEMPLATE = lib

include (../../liteideplugin.pri)
include (../../api/acpapi/acpapi.pri)

DEFINES += ACP_LIBRARY

SOURCES += acpplugin.cpp \
    acpclient.cpp \
    acpoption.cpp

HEADERS += acpplugin.h \
    acpclient.h \
    acpoption.h

FORMS += acpoption.ui
