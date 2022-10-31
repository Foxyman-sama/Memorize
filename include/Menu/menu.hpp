#ifndef MENU_HPP
#define MENU_HPP

#include <QMenu>
#include <QAction>
#include <QActionGroup>
#include <QMenuBar>

class Menu
{
public:
    static QMenuBar *initMain() noexcept;
};

#endif // MENU_HPP
