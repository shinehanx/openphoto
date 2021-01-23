#ifndef UIMODEL_H
#define UIMODEL_H
#include <QString>

//工具栏的数据
typedef struct _ToolButtonData{
    QString type; //类型，比如QLabel/QListView等
    QString name; //工具栏名
    QString icon; //工具栏图标
    QString tip; //工具栏tooltip
} ToolButtonData;

//方格列表项的数据
typedef struct _GridListItemData{
    QString name; //方格名
    QString icon; //方格图标
    QString tip; //方格tooltip
} GridListItemData;

//图层历史的数据
typedef struct _LayerLogListItemData{
    QString name; //列表项的名称
    QString img; //列表项图标
    QString text; //列表项显示文本
} LayerLogListItemData;

//通道历史的数据
typedef struct _ChanelListItemData{
    QString name; //列表项的名称
    QString img; //列表项图标
    QString text; //列表项显示文本
    QString shotcut; //快捷键
} ChanelListItemData;

#endif // UIMODEL_H
