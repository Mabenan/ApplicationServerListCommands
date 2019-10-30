QT += gui

TEMPLATE = lib
CONFIG += plugin

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    listcommandscommand.cpp

HEADERS += \
    listcommandscommand.h

DISTFILES += ApplicationServerListCommands.json

DESTDIR = $$OUT_PWD/../ApplicationServer/debug/plugins
CONFIG(test): DESTDIR = $$OUT_PWD/../ApplicationServerTest/debug/plugins

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
}
!isEmpty(target.path): INSTALLS += target



win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ApplicationServerInterface/release/ -lApplicationServerInterface
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ApplicationServerInterface/debug/ -lApplicationServerInterface
else:unix: LIBS += -L$$OUT_PWD/../ApplicationServerInterface/ -lApplicationServerInterface

INCLUDEPATH += $$PWD/../ApplicationServerInterface
DEPENDPATH += $$PWD/../ApplicationServerInterface
