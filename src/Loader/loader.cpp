#include "include/Loader/loader.hpp"

void Loader::addCheckBox(QCheckBox *_p_widget) noexcept {
    p_widgets_.emplace_back(_p_widget);
}

void Loader::save() noexcept {
    qDebug() << "321";

    fout_.open("settings.txt", std::ios_base::out);

    for (size_t it {}; it < p_widgets_.size(); ++it) {
        fout_ << it << ' ' << p_widgets_[it]->isChecked() << std::endl;
    }

    fout_.close();
}

void Loader::load() noexcept {
    qDebug() << "123";

    fin_.open("settings.txt");

    size_t it {};

    while (fin_ >> it) {
        bool state {};

        fin_ >> state;

        qDebug() << it << ' ' << state;

        p_widgets_[it]->setChecked(state);
    }

    fin_.close();
}
