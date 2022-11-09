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

    void initChBox(QCheckBox         **_p_chbox,
                   const std::string  &_title) noexcept;
    void prepareSave(QCheckBox *_p_chbox) noexcept {
        loader.addCheckBox(_p_chbox);
    }

protected slots:
    virtual void processing() noexcept = 0;
};

#endif // ABSTRACTWIDGET_HPP
