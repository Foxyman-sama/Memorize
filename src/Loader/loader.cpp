#include "include/Loader/loader.hpp"

void Loader::save() noexcept {
    fout_.open("settings.txt");

    for (size_t it {}; it < p_widgets_.size(); ++it) {
        fout_ << it << ' ' << p_widgets_[it]->isChecked() << std::endl;
    }

    fout_.close();
}

void Loader::load() noexcept {
    fin_.open("settings.txt");

    size_t it {};
    bool   state {};

    while (fin_ >> it) {
        fin_ >> state;

        p_widgets_[it]->setChecked(state);
    }

    fin_.close();
}
