#ifndef SINGETONS_HPP
#define SINGETONS_HPP

#include <vector>

template <typename T>
class Singetons
{
    public:
        static T& getInstance()
        {
            static T instance;
            return instance;
        }
    private:
        Singetons() {}
};

#endif