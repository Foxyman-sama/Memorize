#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <QDebug>

class FileManager {
public:
    void deleteWinApps() noexcept;
    void clearTemp() noexcept;
    void deleteHiberFile() noexcept;
};

#endif // FILEMANAGER_HPP
