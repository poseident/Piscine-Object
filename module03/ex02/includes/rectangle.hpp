#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle: public Shape
{
    public:
        Rectangle(const double length, const double width): _length(length), _width(width) {};
        virtual const double get_area() const //l x w
        {
            return _length * _width;
        }
        virtual const double get_perimeter() const //Perimeter=2×(length+width)
        {
            return 2 * (_length + _width);
        }
    private:
        const double _length;
        const double _width;
};

#endif