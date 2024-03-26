#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
    public:
        virtual const float get_area() const = 0;
        virtual const float get_perimeter() const = 0;
    private:
};

#endif