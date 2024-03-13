#include "../includes/Account.hpp"

Account::~Account()
{
    std::cout << "Account: " << this->_id << "sucessfully destroyed" << std::endl;
}

Account::Account(int id, double value)
{
    this->_id = id;
    this->_value = value;
    std::cout << "Account: " << this->_id << "was created" << std::endl;
}

void Account::add_money(double value)
{
    this->_value += value;
}

void Account::set_value(double value)
{
    this->_value = value;
}

void Account::delete_money(double value)
{
    this->_value -= value;
}

int Account::get_id() const
{
    return _id;
}

double Account::get_value() const
{
    return _value;
}

void Account::print_info()
{
    std::cout << "id : " << this->_id << std::endl;
    std::cout << "value : " << this->_value << std::endl;
}