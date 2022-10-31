#include "include/Menu/menu.hpp"

QMenuBar *Menu::initMain() noexcept
{
    QMenuBar *p_menu {new QMenuBar {}};
    QMenu    *p_main {new QMenu {"Меню"}};
    QAction  *p_exit {new QAction {"Выход\tAlt + F4"}};

    p_main->addAction(p_exit);
    p_menu->addMenu(p_main);

    return p_menu;
}
