#ifndef MENU_HPP
#define MENU_HPP

#include <QMenu>
#include <QAction>
#include <QMenuBar>

class Menu : public QMenuBar {
public:
    explicit Menu(QWidget* _p_parent = nullptr) noexcept;
};

#endif // MENU_HPP
