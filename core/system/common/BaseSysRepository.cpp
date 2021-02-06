#include "BaseSysRepository.h"
#include <QApplication>
#include <QThread>
#include <QCoreApplication>


BaseSysRepository::BaseSysRepository()
{

    connect = getConnect();
    if (connect.isValid() == false || connect.isOpen() == false) {
        qDebug() << "BaseSysRepository::BaseSysRepository(), db connect...";
        qDebug() << "BaseSysRepository::BaseSysRepository(), connect.isValid():" << connect.isValid() << "connect.isOpen():" << connect.isOpen();

        QString dbPath = initDbFile();
        qDebug() << "db path:" << dbPath;
        connect.setDatabaseName(dbPath);

    }

    connect.setHostName("localhost");
    connect.setUserName("root");
    connect.setPassword("op123!@#$%");

    if (!connect.open()) {
        qDebug() << "db connect.open Error:"  << connect.lastError();
        return ;
    }


}

QSqlDatabase BaseSysRepository::getConnect()
{
    static QSqlDatabase conn;
    if (!conn.isValid()) {
        conn = QSqlDatabase::addDatabase("QSQLITE");
    }
    return conn;
}

QString BaseSysRepository::getErrorMsg()
{
    Qt::HANDLE threadId = QThread::currentThreadId();
    if (errorMsg[threadId].isNull() || errorMsg[threadId].isEmpty())
        return "";

    return errorMsg[threadId];
}

void BaseSysRepository::setErrorMsg(QString msg)
{
    Qt::HANDLE threadId = QThread::currentThreadId();
    errorMsg[threadId] = msg;
}


QString BaseSysRepository::initDbFile()
{
    QString dbDir = QDir::homePath() + "/AppData/openphoto/data";
    QDir dir(dbDir);
    if (!dir.exists()) {
        qDebug() << "mkpath:" << dbDir;
        dir.mkpath(dbDir);
    }

    QString path = dbDir + "/OpenPhotoSys.s3db";
    QFile file(path);
    if (!file.exists()) {
        QFile origFile(":/rc/db/OpenPhotoSys.s3db");
        if (origFile.exists())
            origFile.copy(path);

        origFile.close();
    }
    file.setPermissions(QFile::ReadOwner| QFile::WriteOwner);
    file.close();
    return path;
}

qlonglong BaseSysRepository::lastId()
{
    QString sql = "SELECT LAST_INSERT_ROWID() as nums";

    QSqlQuery query(connect);
    query.prepare(sql);

    if (!query.exec()) {
        return 0;
    }
    query.first();
    return query.value(0).toULongLong();
}

