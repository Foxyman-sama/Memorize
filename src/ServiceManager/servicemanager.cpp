#include "include/ServiceManager/servicemanager.hpp"

void ServiceManager::disableIndexing() noexcept {
    system("SC STOP \"WSearch\"");
    system("SC CONFIG \"WSearch\" START= DISABLED");

    qDebug() << "15";
}
void ServiceManager::disableSysMain() noexcept {
    system("SC STOP \"SysMain\"");
    system("SC CONFIG \"SysMain\" START= DISABLED");

    qDebug() << "16";
}
