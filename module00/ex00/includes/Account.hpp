#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

# include <cstring>
# include <iostream>

class Account
{
    public:
        ~Account();
        void print_info();
        int get_id() const;
        void add_money(double value);
        void delete_money(double value);
        double get_value() const;
        void set_value(double value);
    private:
        Account(int id, double value);
        int _id;
        double _value;
        friend class Bank;
};

#endif