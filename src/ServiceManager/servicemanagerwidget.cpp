#include "include/ServiceManager/servicemanagerwidget.hpp"

ServiceManagerWidget::ServiceManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    p_disind_   = new QCheckBox {"Отключение службы индексирования Windows"};
    p_dissmain_ = new QCheckBox {"Отключение службы SuperFetch"};

    p_glayout_->addWidget(p_disind_);
    p_glayout_->addWidget(p_dissmain_);

    prepareSave();
}

void ServiceManagerWidget::prepareSave() noexcept {
    loader.addCheckBox(p_disind_);
    loader.addCheckBox(p_dissmain_);
}

void ServiceManagerWidget::processing() noexcept {
    if (p_disind_->isChecked()) {
        p_disind_->setCheckState(Qt::Unchecked);

        sm_.disableIndexing();
    }

    if (p_dissmain_->isChecked()) {
        p_dissmain_->setCheckState(Qt::Unchecked);

        sm_.disableSysMain();
    }
}
