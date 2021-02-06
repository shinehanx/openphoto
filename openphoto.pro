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
    core/system/common/BaseSysRepository.cpp \
    core/system/common/SysIdRepository.cpp \
    main.cpp \
    MainWindow.cpp \
    model/UiModel.cpp \
    openphoto.cpp \
    ui/MainFrameSplitter.cpp \
    ui/RightFrameSplitter.cpp \
    ui/control/ControlBar.cpp \
    ui/control/ControlToolbar.cpp \
    ui/menu/MainMenuToolbar.cpp \
    ui/panel/RightPanel.cpp \
    ui/tab/AdjustStyleTab.cpp \
    ui/tab/ColorPlansTab.cpp \
    ui/tab/LayerChanelPathTab.cpp \
    ui/tab/MainPhotoTab.cpp \
    ui/widget/ChangeFrontBackColorWidget.cpp \
    ui/widget/ChromatogramWidget.cpp \
    ui/widget/ColorChanelWidget.cpp \
    ui/widget/FillStrokeColorWidget.cpp \
    ui/widget/ImageView.cpp \
    ui/widget/RgbChanelWidget.cpp \
    ui/widget/grid/GridItemWidget.cpp \
    ui/widget/grid/GridListWidget.cpp \
    ui/widget/list/ChanelItemWidget.cpp \
    ui/widget/list/ChanelListWidget.cpp \
    ui/widget/list/LayerLogItemWidget.cpp \
    ui/widget/list/LayerLogListWidget.cpp \
    ui/widget/list/LogItemWidget.cpp \
    ui/widget/panel/AdjustPanelWidget.cpp \
    ui/widget/panel/ChanelPanelWidget.cpp \
    ui/widget/panel/ColorPanelWidget.cpp \
    ui/widget/panel/LayerPanelWidget.cpp \
    ui/widget/panel/PansPanelWidget.cpp \
    ui/widget/panel/PathPanelWidget.cpp \
    ui/widget/panel/StylePanelWidget.cpp \
    ui/widget/slider/ColorChanelSlider.cpp \
    ui/widget/toolbar/AdjustPanelToolBar.cpp \
    ui/widget/toolbar/LayerLockToolBar.cpp \
    ui/widget/toolbar/LayerOpacityToolBar.cpp \
    ui/widget/toolbar/LayerTypeToolBar.cpp

HEADERS += \
    MainWindow.h \
    core/system/common/BaseSysRepository.h \
    core/system/common/SysIdRepository.h \
    model/UiModel.h \
    ui/MainFrameSplitter.h \
    ui/RightFrameSplitter.h \
    ui/control/ControlBar.h \
    ui/control/ControlToolbar.h \
    ui/menu/MainMenuToolbar.h \
    ui/panel/RightPanel.h \
    ui/tab/AdjustStyleTab.h \
    ui/tab/ColorPlansTab.h \
    ui/tab/LayerChanelPathTab.h \
    ui/tab/MainPhotoTab.h \
    ui/widget/ChangeFrontBackColorWidget.h \
    ui/widget/ChromatogramWidget.h \
    ui/widget/ColorChanelWidget.h \
    ui/widget/FillStrokeColorWidget.h \
    ui/widget/ImageView.h \
    ui/widget/PansPanelWidget.h \
    ui/widget/RgbChanelWidget.h \
    ui/widget/grid/GridItemWidget.h \
    ui/widget/grid/GridListWidget.h \
    ui/widget/list/ChanelItemWidget.h \
    ui/widget/list/ChanelListWidget.h \
    ui/widget/list/LayerLogItemWidget.h \
    ui/widget/list/LayerLogListWidget.h \
    ui/widget/list/LogItemWidget.h \
    ui/widget/panel/AdjustPanelWidget.h \
    ui/widget/panel/ChanelPanelWidget.h \
    ui/widget/panel/ColorPanelWidget.h \
    ui/widget/panel/LayerPanelWidget.h \
    ui/widget/panel/PansPanelWidget.h \
    ui/widget/panel/PathPanelWidget.h \
    ui/widget/panel/StylePanelWidget.h \
    ui/widget/slider/ColorChanelSlider.h \
    ui/widget/toolbar/AdjustPanelToolBar.h \
    ui/widget/toolbar/LayerLockToolBar.h \
    ui/widget/toolbar/LayerOpacityToolBar.h \
    ui/widget/toolbar/LayerTypeToolBar.h

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
