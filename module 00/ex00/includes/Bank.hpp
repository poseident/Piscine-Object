#ifndef BANK_HPP
#define BANK_HPP

#include <cstring>
#include "Account.hpp"
#include <vector>
#include <iostream>

class Bank
{
    public:
        Bank();
        ~Bank();
        void display_bank_info();
        void create_account(double value);
        void add_money(int id, double amount);
        void delete_money(int id, double amount);
        void delete_account(int id);
        void loan(int id, double loanAmount);
        bool isValidCurrencyAmount(double amount);
        void set_value(int id, double value);
    private:
        int customer_nbr;
        double liquidity;
        std::vector<Account *> clientAccounts;
};

#endif