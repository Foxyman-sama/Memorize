#include "include/SystemManager/systemmanagerwidget.hpp"

SystemManagerWidget::SystemManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    p_disdef_   = new QCheckBox {"Отключение Windows Защитника"};
    p_disbr_    = new QCheckBox {"Отключение Windows Брандмауэра"};
    p_disupd_   = new QCheckBox {"Отключение обновлений Windows"};
    p_crpcfg_   = new QCheckBox {"Создать конфигурация питания максимальной производительности"};
    p_disonedr_ = new QCheckBox {"Отключение OneDrive"};
    p_dissmscr_ = new QCheckBox {"Отключить SmartScreen"};

    p_glayout_->addWidget(p_disdef_);
    p_glayout_->addWidget(p_disbr_);
    p_glayout_->addWidget(p_disupd_);
    p_glayout_->addWidget(p_crpcfg_);
    p_glayout_->addWidget(p_disonedr_);
    p_glayout_->addWidget(p_dissmscr_);

    prepareSave();
}

void SystemManagerWidget::prepareSave() noexcept {
    loader.addCheckBox(p_disdef_);
    loader.addCheckBox(p_disbr_);
    loader.addCheckBox(p_disupd_);
    loader.addCheckBox(p_crpcfg_);
    loader.addCheckBox(p_disonedr_);
    loader.addCheckBox(p_dissmscr_);
}

void SystemManagerWidget::processing() noexcept {
    if (p_disdef_->isChecked()) {
        p_disdef_->setCheckState(Qt::Unchecked);

        sm_.disableDefender();
    }

    if (p_disbr_->isChecked()) {
        p_disbr_->setCheckState(Qt::Unchecked);

        sm_.disableBrandmauer();
    }

    if (p_disupd_->isChecked()) {
        p_disupd_->setCheckState(Qt::Unchecked);

        sm_.disableUpdates();
    }   

    if (p_crpcfg_->isChecked()) {
        p_crpcfg_->setCheckState(Qt::Unchecked);

        sm_.createMaxPerfConf();
    }

    if (p_disonedr_->isChecked()) {
        p_disonedr_->setCheckState(Qt::Unchecked);

        sm_.disableOneDrive();
    }

    if (p_dissmscr_->isChecked()) {
        p_dissmscr_->setCheckState(Qt::Unchecked);

        sm_.disableSmartScreen();
    }
}
