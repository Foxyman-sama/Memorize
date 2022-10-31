#ifndef MENU_HPP
#define MENU_HPP

#include <QMenu>
#include <QAction>
#include <QActionGroup>
#include <QMenuBar>

class Menu
{
private:
    static QMenu *initMenu();

public:
    static QMenuBar *initMenuBar() noexcept;
};

#endif // MENU_HPP
