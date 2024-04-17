#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <cmath>

class Shape
{
    public:
        virtual void get_area() const = 0;
        virtual void get_perimeter() const = 0;
    private:
};

#endif