#ifndef PACKAGEREDUCTIONDISCOUNT_HPP
#define PACKAGEREDUCTIONDISCOUNT_HPP

#include "command.hpp"
#include <string>

class PackageReductionDiscount: public Command
{
    public:
        PackageReductionDiscount(std::string article, std::string date, std::string client): Command(article, date, client) {}
        ~PackageReductionDiscount() {}
        virtual float get_total_price() const{
            std::cout << "applied 10 euros discount because command exceed 150euros" << std::endl;
            return (30.02);
        }
};

#endif