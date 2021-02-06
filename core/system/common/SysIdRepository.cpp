#include "SysIdRepository.h"


SysIdRepository * SysIdRepository::theInstance = NULL;

SysIdRepository::SysIdRepository() : BaseSysRepository()
{

}

SysIdRepository::~SysIdRepository()
{
    if (SysIdRepository::theInstance == NULL) {
        delete SysIdRepository::theInstance;
    }
}

SysIdRepository * SysIdRepository::getInstance()
{
    if (SysIdRepository::theInstance == NULL) {
        SysIdRepository::theInstance = new SysIdRepository();
    }

    return SysIdRepository::theInstance;
}

qlonglong SysIdRepository::nextId(QString &tblName)
{
    QString sql = "SELECT next_id FROM sys_id WHERE tbl_name=:tbl_name ";
    QSqlQuery query(connect);
    query.prepare(sql);
    query.bindValue(":tbl_name",tblName);

    if (!query.exec() || query.size() == 0) {
        return 0;
    }

    query.first();
    qlonglong ret = query.value(0).toULongLong();
    sql = "UPDATE sys_id SET next_id=next_id+1 WHERE tbl_name=:tbl_name";

    query.prepare(sql);
    query.bindValue(":tbl_name",tblName);
    if (!query.exec()) {
        qDebug() << __FILE__ << __LINE__ << " error:" << query.lastError().text();
    }

    return  ret;
}
