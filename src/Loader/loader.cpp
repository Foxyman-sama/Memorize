#include "include/Loader/loader.hpp"

void Loader::setDocumentPath() noexcept {
    char       *username { };
    size_t      size { };

    _dupenv_s(&username, &size, "USERPROFILE");

    docpath_.append(username);
    docpath_.append("\\Documents\\Memorize");

    delete[] username;
}

void Loader::save() noexcept {
    system(("mkdir " + docpath_).c_str());

    fout_.open(docpath_ + "\\settings.txt");

    for (size_t it {}; it < p_widgets_.size(); ++it) {
        fout_ << it << ' ' << p_widgets_[it]->isChecked() << std::endl;
    }

    fout_.close();
}
void Loader::load() noexcept {
    fin_.open(docpath_ + "\\settings.txt");

    size_t it {};
    bool   state {};

    while (fin_ >> it) {
        fin_ >> state;

        p_widgets_[it]->setChecked(state);
    }

    fin_.close();
}
