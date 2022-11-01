#include <QApplication>
#include "include/mainwindow.hpp"

int main(int argc, char *argv[]) {
    try {
        QApplication a {argc, argv};
        MainWindow   window {};

        window.show();

        return a.exec();
    }

    catch (...) {
        qWarning() << "ERROR!";
    }
}
