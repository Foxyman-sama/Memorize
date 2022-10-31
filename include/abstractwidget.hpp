#ifndef ABSTRACTWIDGET_HPP
#define ABSTRACTWIDGET_HPP

#include <QWidget>
#include <QGridLayout>
#include <QGroupBox>
#include <QVBoxLayout>

class AbstractWidget : public QWidget
{
    Q_OBJECT

protected:
    QGridLayout *p_mlayout_;
    QGroupBox   *p_group_;
    QVBoxLayout *p_glayout_;

protected:
    explicit AbstractWidget(QWidget *_p_parent = nullptr) noexcept;
    virtual ~AbstractWidget() noexcept {}

protected slots:
    virtual void processing() noexcept = 0;
};

#endif // ABSTRACTWIDGET_HPP
