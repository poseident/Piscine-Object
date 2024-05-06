#include "../includes/command.hpp"
#include "../includes/packageReductionDiscount.hpp"
#include "../includes/thuesdayDiscount.hpp"

#include <utility> // for std::pair
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::pair<std::string, double> > myVector;

    myVector.push_back(std::make_pair("ball", 50.0));
    myVector.push_back(std::make_pair("golf", 150.0));

    Command command1 = Command(myVector, "bob");
    std::cout << command1.get_total_price() << std::endl;
    PackageReductionDiscount command2 = PackageReductionDiscount(myVector, "bob");
    std::cout << command2.get_total_price() << std::endl;
    ThuesdayDiscount command3 = ThuesdayDiscount(myVector, "bob");
    std::cout << command3.get_total_price();
}