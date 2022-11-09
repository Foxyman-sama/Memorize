#include "include/SystemManager/systemmanagerwidget.hpp"

SystemManagerWidget::SystemManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    initChBox(&p_disdef_, "Отключение Windows Защитника");
    initChBox(&p_disbr_, "Отключение Windows Брандмауэра");
    initChBox(&p_disupd_, "Отключение обновлений Windows");
    initChBox(&p_crpcfg_, "Создать конфигурация питания максимальной производительности");
    initChBox(&p_disonedr_, "Отключение OneDrive");
    initChBox(&p_dissmscr_, "Отключить SmartScreen");
    initChBox(&p_disuac_, "Отключить UAC");
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

    if (p_disuac_->isChecked()) {
        p_disuac_->setCheckState(Qt::Unchecked);

        sm_.disableUAC();
    }
}
