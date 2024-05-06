#ifndef THUESDAYDISCOUNT_HPP
#define THUESDAYDISCOUNT_HPP

#include "command.hpp"
#include <string>

class ThuesdayDiscount: public Command
{
    public:
        ThuesdayDiscount(std::vector<std::pair<std::string, double> > article, std::string client): Command(article, client) {}
        ~ThuesdayDiscount() {}
        virtual double get_total_price() const{
            std::cout << "Applied 10% because its thuesday" << std::endl;
            double total = 0.0;
            for (long unsigned int i = 0; i < _articles.size(); ++i)
                total += _articles[i].second;
            return (total - ((total * 10) / 100));
        }
    private:
};

#endif