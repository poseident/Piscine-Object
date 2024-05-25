#ifndef SINGETON_HPP
#define SINGETON_HPP

template <typename T>
class Singeton {
public:
    static T& getInstance() {
        static T instance;
        return instance;
    }

protected:
    Singeton() {}
    ~Singeton() {}

private:
    Singeton(const Singeton&);
    Singeton& operator=(const Singeton&);
};

#endif // SINGLETON_MIXIN_HPP
