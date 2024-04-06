#ifndef TRIANGLE_HPP
#define TRIANLE_HPP

#include "shape.hpp"
#include <stdexcept>

class Triangle: public Shape
{
    public:
        Triangle(const float base, const float heigth, const float length): _base(base), _height(heigth), _length(length)
        {
            if (_base <= 0 || _height <= 0 || _length <= 0)
                throw std::invalid_argument("Base or heigth must be positiv");
            if (_base + _height <= _length || _base + _length <= _height || _height + _length <= 0)
                throw std::invalid_argument("The sum of any two edges will need to be larger than the third");
            if (_base < _height)
                swap(_base, _height);
            if (_base < _length)
                swap(_base, _length);
        }
        virtual const float get_area() const //A =  (b × h) /2
        {
            return (_base * _height) / 2.0;
        }
        virtual const float get_perimeter() const //b + l + h
        {
            return (_base + _height + _length);
        }
    private:
        float _base;
        float _height;
        float _length;
        void swap(float& a, float& b)
        {
            float temp = a;
            a = b;
            b = temp;
        } 
};

#endif