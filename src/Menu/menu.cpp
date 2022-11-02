#include "include/Menu/menu.hpp"

Menu::Menu(QWidget *_p_parent) noexcept :
    QMenuBar {_p_parent} {
    QMenu    *p_main {new QMenu {"Меню"}};    
    QAction  *p_save {new QAction {"Сохранить\tCtrl + S"}};
    QAction  *p_load {new QAction {"Загрузить\tCtrl + V"}};
    QAction  *p_exit {new QAction {"Выход\tAlt + F4"}};

    p_main->addAction(p_save);
    p_main->addAction(p_load);
    p_main->addAction(p_exit);

    addMenu(p_main);
}
