#include "../includes/Bank.hpp"

Bank::~Bank()
{
    for (size_t i = 0; i < clientAccounts.size(); ++i) {
            delete clientAccounts[i];
        }
        clientAccounts.clear();
    std::cout << "Bank sucessfully destroyed" << std::endl;
}

Bank::Bank()
{
    std::cout << "Bank is created" << std::endl;
    this->liquidity = 999;
    this->customer_nbr = 1;
}

void Bank::delete_account(int id)
{
    for (size_t i = 0; i < clientAccounts.size(); i++) {
        if (clientAccounts[i]->get_id() ==id) {
            delete clientAccounts[i];
            clientAccounts.erase(clientAccounts.begin() + i);
            return ;
        }
    }
}

bool Bank::isValidCurrencyAmount(double amount)
{
    // Check if the amount has more than two digits after the decimal point
    double decimalPart = amount - static_cast<int>(amount);
    return decimalPart <= 0.99; // Allow up to two decimal places (cents)
}

void Bank::loan(int id, double loanAmount)
{
    if (this->isValidCurrencyAmount(loanAmount))
        std::cout << "Valid currency amount. loan accorded" << std::endl;
    else{
        std::cout << "Invalid currency amount. loan not accorded" << std::endl;
        return ;
    }
    if (loanAmount > liquidity){
        std::cout << "loan amount exceed bank liquidity" << std::endl;
    }
    else {
        for (size_t i = 0; i < clientAccounts.size(); ++i) {
            if (clientAccounts[i]->get_id() == id) {
                clientAccounts[i]->add_money(loanAmount);
                this->liquidity -= loanAmount;
                return ;
            }
        }
    }
}

void Bank::add_money(int id, double amount)
{
    if (this->isValidCurrencyAmount(amount))
        std::cout << "Valid currency amount. money added" << std::endl;
    else{
        std::cout << "Invalid currency amount. money not added" << std::endl;
        return ;
    }
    for (size_t i = 0; i < clientAccounts.size(); ++i) {
        if (clientAccounts[i]->get_id() == id) {
            double amountToDeposit = amount * 0.95;
            clientAccounts[i]->add_money(amountToDeposit);

            double bankCommission = amount * 0.05;
            liquidity += bankCommission;
            std::cout << "account: " << clientAccounts[i]->get_id() << " tried to add " << amount << ", bank took " << bankCommission << " and customer had " << amountToDeposit << std::endl;
            return;
        }
    }
}

void Bank::delete_money(int id, double amount)
{
    if (this->isValidCurrencyAmount(amount))
        std::cout << "Valid currency amount. " << std::endl;
    else{
        std::cout << "Invalid currency amount." << std::endl;
        return ;
    }
    for (size_t i = 0; i < clientAccounts.size(); ++i) {
        if (clientAccounts[i]->get_id() == id) {
            clientAccounts[i]->delete_money(amount);
            return ;
        }
    }
}

void Bank::set_value(int id, double value)
{
    if (this->isValidCurrencyAmount(value))
        std::cout << "Valid currency amount. " << std::endl;
    else{
        std::cout << "Invalid currency amount." << std::endl;
        return ;
    }
    for (size_t i = 0; i < clientAccounts.size(); ++i) {
        if (clientAccounts[i]->get_id() == id) {
            clientAccounts[i]->set_value(value);
            return ;
        }
    }
}

void Bank::create_account(double value)
{
    if (this->isValidCurrencyAmount(value))
        std::cout << "Valid currency amount. " << std::endl;
    else{
        std::cout << "Invalid currency amount." << std::endl;
        return ;
    }
    int accountId = customer_nbr++;
    Account* newAccount = new Account(accountId, value);
    clientAccounts.push_back(newAccount);
}

void Bank::display_bank_info()
{
    std::cout << "Bank information : " << std::endl;
    std::cout << "Liquidity : " << this->liquidity << std::endl;
    //display Account here
    std::cout << "Account :" << std::endl;
    for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
            (*it)->print_info();
        }
}