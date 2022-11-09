#include "include/FileManager/filemanagerwidget.hpp"

FileManagerWidget::FileManagerWidget(QWidget *_p_parent) :
    AbstractWidget{_p_parent} {
    initChBox(&p_delwapps_, "Удаление всех встроенных приложений Windows");
    initChBox(&p_clrtmp_, "Очистка папки Temp");
    initChBox(&p_delhibf_, "Удалить файл гибернации");
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
