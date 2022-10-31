#include "include/Menu/menu.hpp"

Menu::Menu(QWidget *_p_parent) noexcept :
    QMenuBar {_p_parent} {
    QMenu    *p_main {new QMenu {"Меню"}};
    QAction  *p_exit {new QAction {"Выход\tAlt + F4"}};

    p_main->addAction(p_exit);

    addMenu(p_main);
}
