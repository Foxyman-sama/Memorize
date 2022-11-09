#include "include/ServiceManager/servicemanagerwidget.hpp"

ServiceManagerWidget::ServiceManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    initChBox(&p_disind_, "Отключение службы индексирования Windows");
    initChBox(&p_dissmain_, "Отключение службы SuperFetch");
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
