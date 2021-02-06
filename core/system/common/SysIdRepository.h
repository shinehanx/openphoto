#ifndef SYSIDREPOSITORY_H
#define SYSIDREPOSITORY_H
#include "BaseSysRepository.h"

class SysIdRepository : public BaseSysRepository
{
public:
    SysIdRepository();
    ~SysIdRepository();

    static SysIdRepository * getInstance();
private:
    static SysIdRepository * theInstance;

public:
    qlonglong nextId(QString &tblName);
};

#endif // SYSIDREPOSITORY_H
