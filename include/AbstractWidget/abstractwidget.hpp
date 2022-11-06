#ifndef ABSTRACTWIDGET_HPP
#define ABSTRACTWIDGET_HPP

#include <QWidget>
#include <QGridLayout>
#include <QGroupBox>
#include <QVBoxLayout>

#include "../Loader/loader.hpp"

class AbstractWidget : public QWidget {
    Q_OBJECT

protected:
    QGridLayout *p_mlayout_;
    QGroupBox   *p_group_;
    QVBoxLayout *p_glayout_;

protected:
    explicit AbstractWidget(QWidget *_p_parent = nullptr) noexcept;
    virtual ~AbstractWidget() noexcept {}

    virtual void prepareSave() noexcept = 0;

protected slots:
    virtual void processing() noexcept = 0;
};

#endif // ABSTRACTWIDGET_HPP
