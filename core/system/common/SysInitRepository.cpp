#include "SysInitDb.h"

SysInitDb * SysInitDb::theInstance = NULL;

SysInitDb::SysInitDb() : BaseDb()
{

}

SysInitDb::~SysInitDb()
{
    if (SysInitDb::theInstance == NULL) {
        delete SysInitDb::theInstance;
    }
}

SysInitDb * SysInitDb::getInstance()
{
    if (SysInitDb::theInstance == NULL) {
        SysInitDb::theInstance = new SysInitDb();
    }

    return SysInitDb::theInstance;
}

bool SysInitDb::update(const QString &name, const QString &val)
{
    if (name.isNull() || name.isEmpty() || val.isNull()) {
        setErrorMsg(QObject::tr("params is error!"));
        return false;
    }
    qDebug() <<  QString("update sys_init set val=%1 WHERE name=%2").arg(val).arg(name);
    QString sql = "update sys_init set val=:val WHERE name=:name";
    QSqlQuery query(connect);

    query.prepare(sql);
    query.bindValue(":val", val);
    query.bindValue(":name", name);

    if (!query.exec()) {
        setErrorMsg(QObject::tr("DBError:") + query.lastError().text());
        qDebug() << __FILE__ << __LINE__ << " error:" << query.lastError().text();
        return false;
    }
    return true;
}

SysInit SysInitDb::getByName(const QString &name)
{
    SysInit ret;
    QString sql = "SELECT * FROM sys_init WHERE name=:name ";

    QSqlQuery query(connect);
    query.prepare(sql);
    query.bindValue(":name",name);


    if (!query.exec()) {
        qDebug() << __FILE__ << __LINE__ << " error:" << query.lastError().text();
        return ret;
    }
    query.first();

    ret.id = query.value("id").toLongLong();
    ret.name = query.value("name").toString();
    ret.val = query.value("val").toString();

    return  ret;
}
