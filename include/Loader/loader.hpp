#ifndef LOADER_HPP
#define LOADER_HPP

#include "../TemplateSingleton/templatesingleton.hpp"

class Loader : public Singleton<Loader> {
    Q_OBJECT

public:
    explicit Loader(QObject *parent = nullptr);
};

#endif // LOADER_HPP
