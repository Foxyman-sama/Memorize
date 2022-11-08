#ifndef SYSTEMMANAGERWIDGET_HPP
#define SYSTEMMANAGERWIDGET_HPP

#include <QCheckBox>

#include "include/AbstractWidget/abstractwidget.hpp"
#include "systemmanager.hpp"

class SystemManagerWidget : public AbstractWidget {
    Q_OBJECT

private:
    QCheckBox *p_disdef_;
    QCheckBox *p_disbr_;
    QCheckBox *p_disupd_;
    QCheckBox *p_crpcfg_;
    QCheckBox *p_disonedr_;
    QCheckBox *p_dissmscr_;

    SystemManager sm_;

private:
    virtual void prepareSave() noexcept override;

public:
    explicit SystemManagerWidget(QWidget *_p_parent = nullptr);

public slots:
    virtual void processing() noexcept override;
};

#endif // SYSTEMMANAGERWIDGET_HPP
