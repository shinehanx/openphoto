QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

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
    main.cpp \
    MainWindow.cpp \
    model/UiModel.cpp \
    openphoto.cpp \
    ui/MainFrameSplitter.cpp \
    ui/RightFrameSplitter.cpp \
    ui/control/ControlToolbar.cpp \
    ui/panel/RightPanel.cpp \
    ui/tab/AdjustStyleTab.cpp \
    ui/tab/ColorPlansTab.cpp \
    ui/tab/LevelChanelPathTab.cpp \
    ui/widget/ChangeFrontBackColorWidget.cpp \
    ui/widget/ChromatogramWidget.cpp \
    ui/widget/ColorChanelWidget.cpp \
    ui/widget/FillStrokeColorWidget.cpp \
    ui/widget/ImageView.cpp \
    ui/widget/RgbChanelWidget.cpp \
    ui/widget/panel/AdjustPanelWidget.cpp \
    ui/widget/panel/ColorPanelWidget.cpp \
    ui/widget/panel/PansPanelWidget.cpp \
    ui/widget/slider/ColorChanelSlider.cpp \
    ui/widget/toolbar/AdjustPanelToolBar.cpp

HEADERS += \
    MainWindow.h \
    model/UiModel.h \
    ui/MainFrameSplitter.h \
    ui/RightFrameSplitter.h \
    ui/control/ControlToolbar.h \
    ui/panel/RightPanel.h \
    ui/tab/AdjustStyleTab.h \
    ui/tab/ColorPlansTab.h \
    ui/tab/LevelChanelPathTab.h \
    ui/widget/ChangeFrontBackColorWidget.h \
    ui/widget/ChromatogramWidget.h \
    ui/widget/ColorChanelWidget.h \
    ui/widget/FillStrokeColorWidget.h \
    ui/widget/ImageView.h \
    ui/widget/PansPanelWidget.h \
    ui/widget/RgbChanelWidget.h \
    ui/widget/panel/AdjustPanelWidget.h \
    ui/widget/panel/ColorPanelWidget.h \
    ui/widget/panel/PansPanelWidget.h \
    ui/widget/slider/ColorChanelSlider.h \
    ui/widget/toolbar/AdjustPanelToolBar.h

FORMS += \
    MainWindow.ui

TRANSLATIONS += \
    openphoto_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    openphoto.qrc
