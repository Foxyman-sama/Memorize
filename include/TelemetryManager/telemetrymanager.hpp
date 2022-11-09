#ifndef TELEMETRYMANAGER_HPP
#define TELEMETRYMANAGER_HPP

#include <QDebug>

class TelemetryManager {
public:
    void disableBaseTelemetry() noexcept;
    void disableCEIP() noexcept;
};

#endif // TELEMETRYMANAGER_HPP
