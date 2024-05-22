#ifndef PACKAGEREDUCTIONDISCOUNT_HPP
#define PACKAGEREDUCTIONDISCOUNT_HPP

#include "command.hpp"
#include <string>

class PackageReductionDiscount: public Command
{
    public:
        PackageReductionDiscount(std::vector<std::pair<std::string, double> > article, std::string client): Command(article, client) {}
        ~PackageReductionDiscount() {}
        virtual double get_total_price() const{
            std::cout << "applied 10 euros discount because command exceed 150euros" << std::endl;
            double total = 0;
            for (long unsigned int i = 0; i < _articles.size(); ++i)
                total += _articles[i].second;
            if (total > 150.0)
                return (total - 10.0);
            else
                return total;
        }
};

#endif