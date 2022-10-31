#include "include/SystemManager/systemmanager.hpp"

SystemManager::SystemManager(QObject *_p_parent) :
    QObject{_p_parent}
{

}

void SystemManager::disableDefender() noexcept
{
    /*
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v DisableAntiSpyware /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v AllowFastServiceStartup /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v ServiceKeepAlive /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableOAVProtection /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableRealtimeMonitoring /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Spynet\" /v DisableBlockAtFirstSeen /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Spynet\" /v LocalSettingOverrideSpynetReporting /t REG_DWORD /d 0 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Spynet\" /v SubmitSamplesConsent /t REG_DWORD /d 2 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\WinDefend\" /v Start /t REG_DWORD /d 4 /f");
    */

    qDebug() << "4";
}
void SystemManager::disableBrandmauer() noexcept
{
    /*
    system("netsh advfirewall set allprofiles state off");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\mpssvc\" /v Start /t REG_DWORD /d 4 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows Defender Security Center\\Notifications\" /v DisableNotifications /t REG_DWORD /d 1 /f");
    system("pause");
    */
    qDebug() << "5";
}
void SystemManager::disableUpdates() noexcept
{
    /*
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v DoNotConnectToWindowsUpdateInternetLocations /t REG_DWORD /d 1 /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v UpdateServiceUrlAlternate /t REG_SZ /d \"server.wsus\" /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v WUServer /t REG_SZ /d \"server.wsus\" /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\" /v WUStatusServer /t REG_SZ /d \"server.wsus\" /f");
    system("REG ADD \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\AU\" /v UseWUServer /t REG_DWORD /d 1 /f");
    */

    qDebug() << "6";
}

void SystemManager::createMaxPerfConf() noexcept
{
    /*system(powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61);*/
     qDebug() << "7";
}
