### eqmake4 was here ###
CONFIG -= debug_and_release debug
CONFIG += release

include(../common.pri)
TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += libmeegouxsharingserviceplugin
#SUBDIRS += example

QMAKE_EXTRA_TARGETS += dist
