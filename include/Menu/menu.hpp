#ifndef MENU_HPP
#define MENU_HPP

#include <QObject>
#include <QMenu>
#include <QAction>

class Menu : public QObject
{
    Q_OBJECT
public:
    explicit Menu(QObject *parent = nullptr);

signals:

};

#endif // MENU_HPP
