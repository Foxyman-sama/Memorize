#include <QApplication>
#include "include/mainwindow.hpp"

int main(int argc, char *argv[])
{
    try {
        QApplication a(argc, argv);
        MainWindow w;
        w.show();
        return a.exec();
    } catch (const std::exception& e) {
        qWarning() << e.what();
    }
}
