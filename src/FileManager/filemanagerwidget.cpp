#include "include/FileManager/filemanagerwidget.hpp"

FileManagerWidget::FileManagerWidget(QWidget *_p_parent) :
    AbstractWidget{_p_parent} {
    p_delwapps_ = new QCheckBox {"Удаление всех встроенных приложений Windows"};
    p_clrtmp_   = new QCheckBox {"Очистка папки Temp"};
    p_delhibf_  = new QCheckBox {"Удалить файл гибернации"};

    p_glayout_->addWidget(p_delwapps_);
    p_glayout_->addWidget(p_clrtmp_);
    p_glayout_->addWidget(p_delhibf_);
}

void FileManagerWidget::processing() noexcept {
    if (p_delwapps_->isChecked()) {
        fm_.deleteWinApps();
    }  

    if (p_clrtmp_->isChecked()) {
        fm_.clearTemp();
    }

    if (p_delhibf_->isChecked()) {
        fm_.deleteHiberFile();
    }
}
