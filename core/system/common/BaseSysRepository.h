#ifndef BASESYSREPOSITORY_H
#define BASESYSREPOSITORY_H
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <qvariant.h>
#include <QObject>
class BaseSysRepository
{
public:
    BaseSysRepository();

    QString getErrorMsg();
    void setErrorMsg(QString msg);

    qlonglong lastId(); //获得最后插入的ID，要在同一个Connect里；
protected:
    QSqlDatabase connect; //singleton

    static QSqlDatabase getConnect();

    QMap<Qt::HANDLE, QString> errorMsg;
private:
    void import();
    QString initDbFile();

};

#endif // BASESYSREPOSITORY_H
