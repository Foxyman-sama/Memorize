#include "include/SystemManager/systemmanagerwidget.hpp"

SystemManagerWidget::SystemManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    p_disdef_ = new QCheckBox {"Отключение Windows Защитника"};
    p_disbr_  = new QCheckBox {"Отключение Windows Брандмауэра"};
    p_disupd_ = new QCheckBox {"Отключение обновлений Windows"};
    p_crpcfg_ = new QCheckBox {"Создать конфигурация питания максимальной производительности"};

    p_glayout_->addWidget(p_disdef_);
    p_glayout_->addWidget(p_disbr_);
    p_glayout_->addWidget(p_disupd_);
    p_glayout_->addWidget(p_crpcfg_);
}

void SystemManagerWidget::processing() noexcept {
    if (p_disdef_->isChecked()) {
        sm_.disableDefender();
    }

    if (p_disbr_->isChecked()) {
        sm_.disableBrandmauer();
    }

    if (p_disupd_->isChecked()) {
        sm_.disableUpdates();
    }   

    if (p_crpcfg_->isChecked()) {
        sm_.createMaxPerfConf();
    }
}
