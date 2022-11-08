#include "include/ServiceManager/servicemanager.hpp"

#define DEBUG

void ServiceManager::disableIndexing() noexcept {
#ifndef DEBUG
    system("SC STOP \"WSearch\"");
    system("SC CONFIG \"WSearch\" START= DISABLED");
#endif

    qDebug() << "15";
}
void ServiceManager::disableSysMain() noexcept {
#ifndef DEBUG
    system("SC STOP \"SysMain\"");
    system("SC CONFIG \"SysMain\" START= DISABLED");
#endif

    qDebug() << "16";
}
