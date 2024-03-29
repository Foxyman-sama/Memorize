#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QLabel>
#include <QTabWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QFormLayout>

#include "FileManager/filemanagerwidget.hpp"
#include "SystemManager/systemmanagerwidget.hpp"
#include "ServiceManager/servicemanagerwidget.hpp"
#include "TelemetryManager/telemetrymanagerwidget.hpp"
#include "Menu/menu.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    QWidget                *p_centwidg_;
    MenuBar                *p_menubar_;
    QPushButton            *p_acceptb_;
    FileManagerWidget      *p_fmwidg_;
    SystemManagerWidget    *p_smwidg_;
    ServiceManagerWidget   *p_srmwidg_;
    TelemetryManagerWidget *p_tmwidg_;
    QTabWidget             *p_tbar_;
    QGridLayout            *p_mlayout_;

private:     
    void interface() noexcept;
    void initCentralWidget() noexcept;
    void connectInterface() noexcept;

public:
    explicit MainWindow(QWidget *_p_parent = nullptr) noexcept;
};
#endif // MAINWINDOW_HPP
