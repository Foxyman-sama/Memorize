#ifndef SYSTEMMANAGER_HPP
#define SYSTEMMANAGER_HPP

#include <QObject>
#include <QDebug>

class SystemManager : public QObject {
    Q_OBJECT

public:
    explicit SystemManager(QObject *_p_parent = nullptr);

    void disableDefender() noexcept;
    void disableBrandmauer() noexcept;
    void disableUpdates() noexcept;
    void createMaxPerfConf() noexcept;
    void disableOneDrive() noexcept;
    void disableSmartScreen() noexcept;
};

#endif // SYSTEMMANAGER_HPP
