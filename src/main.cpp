#include <QApplication>
#include "include/mainwindow.hpp"

int main(int   _argc,
         char *_argv[]) {
    try {
        QApplication app {_argc, _argv};
        MainWindow   window {};

        window.show();

        return app.exec();
    }

    catch (...) {
        qWarning() << "ERROR!";
    }
}
