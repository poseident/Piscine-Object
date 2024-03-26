#ifndef TRIANGLE_HPP
#define TRIANLE_HPP

#include "shape.hpp"

class Triangle: public Shape
{
    public:
        Triangle(const float base, const float heigth, const float length): _base(base), _heigth(heigth), _length(length) {};
        virtual const float get_area() const //A =  (b × h) /2
        {
            return (_base * _heigth) / 2;
        }
        virtual const float get_perimeter() const //b + l + h
        {
            return (_base + _heigth + _length);
        }
    private:
        const float _base;
        const float _heigth;
        const float _length; 
};

#endif