#ifndef SERVICEMANAGER_HPP
#define SERVICEMANAGER_HPP

#include <QDebug>

class ServiceManager {
public:
    void disableIndexing() noexcept;
    void disableSysMain() noexcept;
};

#endif // SERVICEMANAGER_HPP
