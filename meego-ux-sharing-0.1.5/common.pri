### eqmake4 was here ###
CONFIG -= debug_and_release debug
CONFIG += release

VERSION = 0.1.5
QT -= gui
#CONFIG += debug

PLUGIN_QML_TARGET_BASE_PATH = $$[QT_INSTALL_IMPORTS]/MeeGo/Sharing/plugins/
MSD_PLUGIN_PATH=/usr/lib/meego-ux-sharing/plugins

DEFINES += QML_TARGET_BASE_PATH=\\\"$$PLUGIN_QML_TARGET_BASE_PATH\\\"
DEFINES += MSD_PLUGIN_PATH=\\\"$$MSD_PLUGIN_PATH\\\"

PROJECT_NAME = meego-ux-sharing
BASEDIR = $$system(pwd)

DISTDIR = $${BASEDIR}/$${PROJECT_NAME}-$${VERSION}
TSDIR = $${DISTDIR}/ts
