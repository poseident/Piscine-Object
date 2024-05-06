#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"
#include <stdexcept>

class Triangle: public Shape
{
    public:
        static double mySqrt(double x) {
            if (x == 0) return 0;
            double guess = x / 2.0;
            double prevGuess;
            do {
                prevGuess = guess;
                guess = (guess + x / guess) / 2.0;
            } while (prevGuess != guess);
            return guess;
        }

        Triangle(const double length1, const double length2, const double length3): _length1(length1), _length2(length2), _length3(length3)
        {
            if (_length1 <= 0 || length2 <= 0 || _length3 <= 0)
                throw std::invalid_argument("length1 or length32 must be positiv");
        }
        virtual void get_area() const
        {
            const double semiPerimeter = (_length1 + _length2 + _length3) / 2;
            const double area = mySqrt(semiPerimeter * (semiPerimeter - _length1) * (semiPerimeter - _length2) * (semiPerimeter - _length3));
            std::cout << "area of triangle : " << area << std::endl;
        }
        virtual void get_perimeter() const 
        {
            std::cout << "perimeter of triangle : " << (_length1 + _length2 + _length3) << std::endl;
        }
    private:
        const double _length1;
        const double _length2;
        const double _length3;
};

#endif