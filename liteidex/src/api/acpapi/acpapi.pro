TARGET = acpapi
TEMPLATE = lib
CONFIG += staticlib

include (../../liteideapi.pri)

DEFINES += ACPAPI_LIBRARY

HEADERS += acpapi.h
