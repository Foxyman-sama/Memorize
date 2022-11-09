#include "include/mainwindow.hpp"

MainWindow::MainWindow(QWidget *_p_parent) noexcept :
    QMainWindow(_p_parent) {
    p_centwidg_ = new QWidget {};
    p_menubar_  = new MenuBar {};
    p_acceptb_  = new QPushButton { "Принять изменения" };
    p_fmwidg_   = new FileManagerWidget {};
    p_smwidg_   = new SystemManagerWidget {};
    p_srmwidg_  = new ServiceManagerWidget {};
    p_tmwidg_   = new TelemetryManagerWidget {};
    p_tbar_     = new QTabWidget {};
    p_mlayout_  = new QGridLayout {};

    initCentralWidget();
    connectInterface();
}

void MainWindow::initCentralWidget() noexcept {
    p_centwidg_->setLayout(p_mlayout_);

    p_tbar_->setTabPosition(QTabWidget::West);
    p_tbar_->addTab(p_fmwidg_, "Файловый менеджер");
    p_tbar_->addTab(p_smwidg_, "Системный менеджер");   
    p_tbar_->addTab(p_srmwidg_, "Сервисный менеджер");
    p_tbar_->addTab(p_tmwidg_, "Телеметрия");

    p_mlayout_->addWidget(p_tbar_);
    p_mlayout_->addWidget(p_acceptb_);

    setMenuBar(p_menubar_);
    setCentralWidget(p_centwidg_);
}

void MainWindow::connectInterface() noexcept {
    connect(p_acceptb_, &QPushButton::clicked,
            p_fmwidg_, &FileManagerWidget::processing);
    connect(p_acceptb_, &QPushButton::clicked,
            p_smwidg_, &SystemManagerWidget::processing);
    connect(p_acceptb_, &QPushButton::clicked,
            p_srmwidg_, &ServiceManagerWidget::processing);
    connect(p_acceptb_, &QPushButton::clicked,
            p_tmwidg_, &TelemetryManagerWidget::processing);
}

