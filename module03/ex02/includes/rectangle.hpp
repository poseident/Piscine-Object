#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle: public Shape
{
    public:
        Rectangle(const float length, const float width): _length(length), _width(width) {};
        virtual const float get_area() const //l x w
        {
            return _length * _width;
        }
        virtual const float get_perimeter() const //Perimeter=2×(length+width)
        {
            return 2 * (_length + _width);
        }
    private:
        const float _length;
        const float _width;
};

#endif