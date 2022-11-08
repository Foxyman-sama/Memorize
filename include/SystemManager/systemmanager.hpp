#ifndef SYSTEMMANAGER_HPP
#define SYSTEMMANAGER_HPP

#include <QDebug>

class SystemManager {
public:
    void disableDefender() noexcept;
    void disableBrandmauer() noexcept;
    void disableUpdates() noexcept;
    void createMaxPerfConf() noexcept;
    void disableOneDrive() noexcept;
    void disableSmartScreen() noexcept;
    void disableUAC() noexcept;
};

#endif // SYSTEMMANAGER_HPP
