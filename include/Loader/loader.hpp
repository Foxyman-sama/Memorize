#ifndef LOADER_HPP
#define LOADER_HPP

#include <QCheckBox>
#include <vector>
#include <fstream>
#include "../TemplateSingleton/templatesingleton.hpp"

class Loader : public QObject, public Singleton<Loader> {
    Q_OBJECT

private:
    std::vector<QCheckBox *> p_widgets_;
    std::ifstream            fin_ {};
    std::ofstream            fout_ {};
    std::string              docpath_ {};

private:
    void setDocumentPath() noexcept;

public:
    Loader() noexcept {
        setDocumentPath();
    }

    void addCheckBox(QCheckBox *_p_widget) noexcept {
        p_widgets_.emplace_back(_p_widget);
    }

public slots:
    void save() noexcept;
    void load() noexcept;
};

inline Loader &loader {Loader::instance()};

#endif // LOADER_HPP
