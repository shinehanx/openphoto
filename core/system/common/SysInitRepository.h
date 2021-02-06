#ifndef SYSINITREPOSITORY_H
#define SYSINITREPOSITORY_H
#include "BaseSysRepository.h"
class SysInitRepository : public BaseSysRepository
{
public:
    SysInitRepository();
    ~SysInitRepository();

    static SysInitRepository * getInstance();

    bool update(const QString &name, const QString &val);
    SysInit getByName(const QString &name);
private:
    static SysInitRepository * theInstance;


};

#endif // SYSINITREPOSITORY_H
