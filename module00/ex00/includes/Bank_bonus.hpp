#ifndef BANK_HPP
#define BANK_HPP

#include <map>
#include <stdexcept>
#include <iostream>

class Bank
{
    private:
        int customer_nbr;
        double liquidity;
        struct Account {
            int id;
            double value;
            Account(int id, double value) : id(id), value(value) {}

            int get_id() const {
                return id;
            }

            int get_value() const {
                return value;
            }
        };
        std::map<int, Account> accounts;
    public:
        Bank();
        ~Bank();
        void add_account(int accountId, double value);
        void create_account(double value);
        void delete_money(int id, double amount);
        bool isValidCurrencyAmount(double amount);
        void display_bank_info();
        void delete_account(int id);
        void loan(int id, double loanAmount);
        void add_money(int id, double amount);
        const Account& operator[](int id) const;
};

#endif