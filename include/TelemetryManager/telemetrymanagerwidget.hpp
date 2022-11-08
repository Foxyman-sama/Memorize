#ifndef TELEMETRYMANAGERWIDGET_HPP
#define TELEMETRYMANAGERWIDGET_HPP

#include <QObject>

#include "include/AbstractWidget/abstractwidget.hpp"
#include "telemetrymanager.hpp"

class TelemetryManagerWidget : public AbstractWidget {
    Q_OBJECT

private:
    TelemetryManager tm_;

    QCheckBox *p_disbtel_;

private:
    virtual void prepareSave() noexcept override;

public:
    explicit TelemetryManagerWidget(QWidget *_p_parent = nullptr);

public slots:
    virtual void processing() noexcept override;
};

#endif // TELEMETRYMANAGERWIDGET_HPP
