QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountwindow.cpp \
    appsettings.cpp \
    birditem.cpp \
    gameboard.cpp \
    main.cpp \
    loginwindow.cpp \
    pillaritem.cpp \
    scene.cpp \
    signup.cpp \
    user.cpp \
    widget.cpp

HEADERS += \
    accountwindow.h \
    appsettings.h \
    birditem.h \
    gameboard.h \
    loginwindow.h \
    pillaritem.h \
    scene.h \
    signup.h \
    user.h \
    widget.h

FORMS += \
    accountwindow.ui \
    gameboard.ui \
    loginwindow.ui \
    signup.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
