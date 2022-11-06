#include "include/Menu/menu.hpp"

MenuBar::MenuBar(QWidget *_p_parent) noexcept :
    QMenuBar {_p_parent} {
    p_menu_    = new QMenu {"Меню"};
    p_actsave_ = new QAction {"Сохранить\tCtrl + S"};
    p_actload_ = new QAction {"Загрузить\tCtrl + V"};
    p_actinfo_ = new QAction {"Справка\tF1"};

    p_menu_->addAction(p_actsave_);
    p_menu_->addAction(p_actload_);
    p_menu_->addSeparator();
    p_menu_->addAction(p_actinfo_);

    connectAction();
    addMenu(p_menu_);
}

void MenuBar::connectAction() noexcept {
    connect(p_actsave_, &QAction::triggered,
            &loader, &Loader::save);
    connect(p_actload_, &QAction::triggered,
            &loader, &Loader::load);
}

