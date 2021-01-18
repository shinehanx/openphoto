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
    QString name; //工具栏名
    QString icon; //工具栏图标
    QString tip; //工具栏tooltip
} GridListItemData;

#endif // UIMODEL_H
