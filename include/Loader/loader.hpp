#ifndef LOADER_HPP
#define LOADER_HPP

#include <QObject>

class Loader : public QObject
{
    Q_OBJECT
public:
    explicit Loader(QObject *parent = nullptr);

signals:

};

#endif // LOADER_HPP
