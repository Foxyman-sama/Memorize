#include "include/TelemetryManager/telemetrymanagerwidget.hpp"

TelemetryManagerWidget::TelemetryManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    p_disbtel_ = new QCheckBox {"Отключить базовую телеметрию"};

    p_glayout_->addWidget(p_disbtel_);

    prepareSave();
}

void TelemetryManagerWidget::prepareSave() noexcept {
    loader.addCheckBox(p_disbtel_);
}

void TelemetryManagerWidget::processing() noexcept {
    if (p_disbtel_->isChecked()) {
        p_disbtel_->setCheckState(Qt::Unchecked);

        tm_.disableBaseTelemetry();
    }
}
