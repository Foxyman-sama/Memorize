#include "include/TelemetryManager/telemetrymanager.hpp"

#define DEBUG

void TelemetryManager::disableBaseTelemetry() noexcept {
#ifndef DEBUG
    system("SC DELETE DiagTrack");
    system("SC DELETE dmwappushservice");
    system("echo «» > C:\\ProgramData\\Microsoft\\Diagnosis\\ETLLogs\\AutoLogger\\AutoLogger-Diagtrack-Listener.etl");
    system("REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\DataCollection\" /v AllowTelemetry /t REG_DWORD /d 0 /f");
#endif

    qDebug() << "30";
}

void TelemetryManager::disableCEIP() noexcept {
#ifndef DEBUG
   system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\SQMClient /v CEIPEnable /t REG_DWORD /d 0 /f");
#endif

   qDebug() << "31";
}
