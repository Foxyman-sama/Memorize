#ifndef TEMPLATESINGLETON_HPP
#define TEMPLATESINGLETON_HPP

#include <QObject>

class NonCopyable {
public:
    NonCopyable(const NonCopyable&) = delete;
    NonCopyable(NonCopyable&&) = delete;

public:
    void operator=(const NonCopyable&) = delete;
    void operator=(NonCopyable&&) = delete;
};

template <typename T>
class Singleton : private NonCopyable, public QObject {
private:
    T *p_derived_;

protected:
    Singleton() noexcept = default;

public:
    ~Singleton() noexcept {
        delete p_derived_;
    }

    T *instance() noexcept {
        if (!p_derived_) {
            p_derived_ = new T {};
        }

        return p_derived_;
    }
};

#endif // TEMPLATESINGLETON_HPP
