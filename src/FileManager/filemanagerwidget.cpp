#include "include/FileManager/filemanagerwidget.hpp"

FileManagerWidget::FileManagerWidget(QWidget *_p_parent) :
    AbstractWidget{_p_parent} {
    p_delwapps_ = new QCheckBox {"Удаление всех встроенных приложений Windows"};
    p_clrtmp_   = new QCheckBox {"Очистка папки Temp"};
    p_delhibf_  = new QCheckBox {"Удалить файл гибернации"};

    p_glayout_->addWidget(p_delwapps_);
    p_glayout_->addWidget(p_clrtmp_);
    p_glayout_->addWidget(p_delhibf_);

    prepareSave();
}

void FileManagerWidget::prepareSave() noexcept {
    loader.addCheckBox(p_delwapps_);
    loader.addCheckBox(p_clrtmp_);
    loader.addCheckBox(p_delhibf_);
}

void FileManagerWidget::processing() noexcept {
    if (p_delwapps_->isChecked()) {
        p_delwapps_->setCheckState(Qt::Unchecked);

        fm_.deleteWinApps();     
    }  

    if (p_clrtmp_->isChecked()) {
        p_clrtmp_->setCheckState(Qt::Unchecked);

        fm_.clearTemp();
    }

    if (p_delhibf_->isChecked()) {
        p_delhibf_->setCheckState(Qt::Unchecked);

        fm_.deleteHiberFile();
    }
}
