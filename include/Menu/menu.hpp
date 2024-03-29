#ifndef MENU_HPP
#define MENU_HPP

#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>

#include "../Loader/loader.hpp"

class MenuBar : public QMenuBar {
    Q_OBJECT

private:
    QMenu   *p_menu_;
    QAction *p_actsave_;
    QAction *p_actload_;
    QAction *p_actinfo_;

private:
    void connectAction() noexcept;

private slots:
    void showInfo() noexcept;

public:
    explicit MenuBar(QWidget* _p_parent = nullptr) noexcept;
};

#endif // MENU_HPP
