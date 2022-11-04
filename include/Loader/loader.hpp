#ifndef LOADER_HPP
#define LOADER_HPP

#include "../TemplateSingleton/templatesingleton.hpp"

class Loader : public QObject, public Singleton<Loader> {
    Q_OBJECT
};

#endif // LOADER_HPP
