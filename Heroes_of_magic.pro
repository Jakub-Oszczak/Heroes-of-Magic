QT += widgets
#QT       += core gui

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Bullet.cpp \
    Enemy.cpp \
    Fireball.cpp \
    GBullet.cpp \
    GFireball.cpp \
    GGrass.cpp \
    GMage.cpp \
    GMagicball.cpp \
    GMap.cpp \
    GPlayer.cpp \
    GTankball.cpp \
    GWall.cpp \
    GWater.cpp \
    GWaterball.cpp \
    Game.cpp \
    Health.cpp \
    Mage.cpp \
    Magicball.cpp \
    Map.cpp \
    NonMovable.cpp \
    Player.cpp \
    Tankball.cpp \
    Waterball.cpp \
    main.cpp

HEADERS += \
    Bullet.h \
    Enemy.h \
    Fireball.h \
    GBullet.h \
    GFireball.h \
    GGrass.h \
    GMage.h \
    GMagicball.h \
    GMap.h \
    GPlayer.h \
    GTankball.h \
    GWall.h \
    GWater.h \
    GWaterball.h \
    Game.h \
    Health.h \
    Mage.h \
    Magicball.h \
    Map.h \
    NonMovable.h \
    Player.h \
    Tankball.h \
    Waterball.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
