#ifndef FILEMANAGERWIDGET_HPP
#define FILEMANAGERWIDGET_HPP

#include <QCheckBox>

#include "include/AbstractWidget/abstractwidget.hpp"
#include "filemanager.hpp"

class FileManagerWidget : public AbstractWidget {
    Q_OBJECT

private:
    FileManager fm_;

    /**
     * p_delwapps_ - Delete all installed Windows apps.
     * p_clrtmp_   - Clear folder "Temp".
     * p_delhibf_  - Delete hibernation file.
     */

    QCheckBox *p_delwapps_;
    QCheckBox *p_clrtmp_;
    QCheckBox *p_delhibf_;

public:
    explicit FileManagerWidget(QWidget *_p_parent = nullptr);

public slots:
    virtual void processing() noexcept override;
};

#endif // FILEMANAGERWIDGET_HPP
