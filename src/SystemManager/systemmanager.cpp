#include "include/SystemManager/systemmanager.hpp"

#define NDEBUG

void SystemManager::disableDefender() noexcept {
#ifndef DEBUG
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v DisableAntiSpyware /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v AllowFastServiceStartup /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v ServiceKeepAlive /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableOAVProtection /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableRealtimeMonitoring /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Spynet\" /v DisableBlockAtFirstSeen /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Spynet\" /v LocalSettingOverrideSpynetReporting /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Spynet\" /v SubmitSamplesConsent /t REG_DWORD /d 2 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\WinDefend\" /v Start /t REG_DWORD /d 4 /f");
#endif

    qDebug() << "4";
}
void SystemManager::disableBrandmauer() noexcept {
#ifndef DEBUG
    system("netsh advfirewall set allprofiles state off");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\mpssvc\" /v Start /t REG_DWORD /d 4 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows Defender Security Center\\Notifications\" /v DisableNotifications /t REG_DWORD /d 1 /f");
    system("pause");
#endif

    qDebug() << "5";
}
void SystemManager::disableUpdates() noexcept {
#ifndef DEBUG
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v DoNotConnectToWindowsUpdateInternetLocations /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v UpdateServiceUrlAlternate /t REG_SZ /d \"server.wsus\" /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v WUServer /t REG_SZ /d \"server.wsus\" /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v WUStatusServer /t REG_SZ /d \"server.wsus\" /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\AU\" /v UseWUServer /t REG_DWORD /d 1 /f");
#endif

    qDebug() << "6";
}
void SystemManager::createMaxPerfConf() noexcept {
#ifndef DEBUG
    system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
#endif

    qDebug() << "7";
}
void SystemManager::disableOneDrive() noexcept {
#ifndef DEBUG
    system("taskkill /f /im OneDrive.exe");
    system("C:\\Windows\\SysWOW64\\OneDriveSetup.exe /uninstall");
#endif

    qDebug() << "8";
}
void SystemManager::disableSmartScreen() noexcept {
#ifndef DEBUG
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\" /v SmartScreenEnabled /t REG_SZ /d \"Off\" /f");
    system("REG ADD \"HKEY_CURRENT_USER\\Software\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoft.microsoftedge_8wekyb3d8bbwe\\MicrosoftEdge\\PhishingFilter\" "
           "/v EnabledV9 /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\AppHost\" /v EnableWebContentEvaluation /t REG_DWORD /d 0 /f");
#endif

    qDebug() << "9";
}
void SystemManager::disableUAC() noexcept {
#ifndef DEBUG
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\" /v EnableLUA /t REG_DWORD /d 0 /f");
#endif

    qDebug() << 10;
}
