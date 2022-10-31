#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <QObject>
#include <QDebug>

class FileManager : public QObject {
    Q_OBJECT

public:
    explicit FileManager(QObject *_p_parent = nullptr);

    void deleteWinApps() noexcept;
    void clearTemp() noexcept;
    void deleteHiberFile() noexcept;
};

#endif // FILEMANAGER_HPP
