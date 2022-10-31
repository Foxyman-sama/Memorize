#include "include/Menu/menu.hpp"

QMenu *Menu::initMenu()
{
    QMenu    *p_main {new QMenu {"Меню"}};
    QAction  *p_exit {new QAction {"Выход\tAlt + F4"}};

    p_main->addAction(p_exit);

    return p_main;
}

QMenuBar *Menu::initMenuBar() noexcept
{
    QMenuBar *p_menu {new QMenuBar {}};

    p_menu->addMenu(Menu::initMenu());

    return p_menu;
}
