#ifndef SERVICEMANAGERWIDGET_HPP
#define SERVICEMANAGERWIDGET_HPP

#include <QCheckBox>

#include "include/AbstractWidget/abstractwidget.hpp"
#include "servicemanager.hpp"

class ServiceManagerWidget : public AbstractWidget {
    Q_OBJECT

private:
    ServiceManager sm_;

    QCheckBox *p_disind_;
    QCheckBox *p_dissmain_;

private:
    virtual void prepareSave() noexcept override;

public:
    explicit ServiceManagerWidget(QWidget *_p_parent = nullptr);

public slots:
    virtual void processing() noexcept override;
};

#endif // SERVICEMANAGERWIDGET_HPP
