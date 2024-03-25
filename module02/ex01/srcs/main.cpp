#include "../includes/command.hpp"
#include "../includes/packageReductionDiscount.hpp"
#include "../includes/thuesdayDiscount.hpp"

int main()
{
    Command command1 = Command("glue", "november", "bob");
    command1.get_total_price();
    PackageReductionDiscount command2 = PackageReductionDiscount("glue", "november", "bob");
    command2.get_total_price();
    ThuesdayDiscount command3 = ThuesdayDiscount("glue", "november", "bob");
    command3.get_total_price();
}