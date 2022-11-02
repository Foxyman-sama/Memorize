#include "include/FileManager/filemanager.hpp"

FileManager::FileManager(QObject *_p_parent) :
    QObject {_p_parent} {
}

void FileManager::deleteWinApps() noexcept {
    qDebug() << "1";
    //system("powershell.exe -command \"Get-AppxPackage *photos* | Remove-AppxPackage\"");
}

void FileManager::clearTemp() noexcept {
    qDebug() << "2";
    //system("rd %temp% /s /q");
}

void FileManager::deleteHiberFile() noexcept {
    qDebug() << "3";
    //system("powercfg -h off");
}
