#include "include/AbstractWidget/abstractwidget.hpp"

AbstractWidget::AbstractWidget(QWidget  *_p_parent) noexcept :
    QWidget {_p_parent} {
    p_mlayout_ = new QGridLayout {this};
    p_group_   = new QGroupBox {};
    p_glayout_ = new QVBoxLayout {p_group_};

    p_glayout_->setAlignment(Qt::AlignTop);

    p_mlayout_->addWidget(p_group_);

    setLayout(p_mlayout_);
}
