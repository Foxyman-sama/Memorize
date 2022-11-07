#include "include/Menu/menu.hpp"

MenuBar::MenuBar(QWidget *_p_parent) noexcept :
    QMenuBar {_p_parent} {
    p_menu_    = new QMenu {"Меню"};
    p_actsave_ = new QAction {"Сохранить"};
    p_actload_ = new QAction {"Загрузить"};
    p_actinfo_ = new QAction {"Справка"};

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
    connect(p_actinfo_, &QAction::triggered,
            this, &MenuBar::showInfo);
}

void MenuBar::showInfo() noexcept {
    QMessageBox::information(this, "Справка",
                             "Эта программа служит средством оптимизация для ОС Windows.\n"
                             "Все действия в этой программе должны быть интуитивно понятны.\n"
                             "Идею которую я вкладывал в данную программу - твикер, дать\n"
                             "пользователю самостоятельно выбирать ту среду в которой он работает.\n"
                             "Всё это с помощью удаление ненужного и редко используемого\n"
                             "встроенного софта и средств ОС Windows.\n"
                             "Все средства оптимизации актуализируются по возможности.");
}

