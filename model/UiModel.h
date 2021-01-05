#ifndef UIMODEL_H
#define UIMODEL_H
#include <QString>

//工具栏的数据
typedef struct _ToolButtonData{
    QString name; //工具栏名
    QString icon; //工具栏图标
    QString tip; //工具栏tooltip
} ToolButtonData;

#endif // UIMODEL_H
