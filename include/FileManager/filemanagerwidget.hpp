#ifndef FILEMANAGERWIDGET_HPP
#define FILEMANAGERWIDGET_HPP

#include <QCheckBox>

#include "include/AbstractWidget/abstractwidget.hpp"
#include "filemanager.hpp"

class FileManagerWidget : public AbstractWidget {
    Q_OBJECT

private:
    QCheckBox *p_delwapps_;
    QCheckBox *p_clrtmp_;
    QCheckBox *p_delhibf_;

    FileManager fm_;

private:
    virtual void prepareSave() noexcept override;

public:
    explicit FileManagerWidget(QWidget *_p_parent = nullptr);

public slots:
    virtual void processing() noexcept override;
};

#endif // FILEMANAGERWIDGET_HPP
