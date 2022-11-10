#include "include/FileManager/filemanager.hpp"

#define NDEBUG

void FileManager::deleteWinApps() noexcept {
#ifndef DEBUG
    system("powershell.exe -command \"Get-AppxPackage *photos* | Remove-AppxPackage\"");
#endif

    qDebug() << "1";
}
void FileManager::clearTemp() noexcept {
#ifndef DEBUG
    system("rd %temp% /s /q");
#endif

    qDebug() << "2";
}
void FileManager::deleteHiberFile() noexcept {
#ifndef DEBUG
    system("powercfg -h off");
#endif

    qDebug() << "3";
}
