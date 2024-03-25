#ifndef THUESDAYDISCOUNT_HPP
#define THUESDAYDISCOUNT_HPP

#include "command.hpp"
#include <string>

class ThuesdayDiscount: public Command
{
    public:
        ThuesdayDiscount(std::string article, std::string date, std::string client): Command(article, date, client) {}
        ~ThuesdayDiscount() {}
        virtual float get_total_price() const{
            std::cout << "Applied 10% because its thuesday" << std::endl;
            return (10.10);
        }
    private:
};

#endif