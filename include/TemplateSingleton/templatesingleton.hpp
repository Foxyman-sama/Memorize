#ifndef TEMPLATESINGLETON_HPP
#define TEMPLATESINGLETON_HPP

#include <QObject>

class NonCopyable {
protected:
    NonCopyable() noexcept = default;
    NonCopyable(const NonCopyable &) = delete;
    NonCopyable(NonCopyable &&) = delete;

protected:
    void operator=(const NonCopyable &) = delete;
    void operator=(NonCopyable &&) = delete;
};

template <typename T>
class Singleton : private NonCopyable {
protected:
    Singleton() noexcept = default;

public:
    T &instance() noexcept {
        static T instance {};

        return instance;
    }
};

#endif // TEMPLATESINGLETON_HPP
