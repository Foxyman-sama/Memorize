#include "include/TelemetryManager/telemetrymanagerwidget.hpp"

TelemetryManagerWidget::TelemetryManagerWidget(QWidget *_p_parent) :
    AbstractWidget {_p_parent} {
    initChBox(&p_disbtel_, "Отключить базовую телеметрию");
    initChBox(&p_disceip_, "Отключить CEIP");
}

void TelemetryManagerWidget::processing() noexcept {
    if (p_disbtel_->isChecked()) {
        p_disbtel_->setCheckState(Qt::Unchecked);

        tm_.disableBaseTelemetry();
    }

    if (p_disceip_->isChecked()) {
        p_disceip_->setCheckState(Qt::Unchecked);

        tm_.disableCEIP();
    }
}
