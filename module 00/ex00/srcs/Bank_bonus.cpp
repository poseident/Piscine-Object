#include "../includes/Bank_bonus.hpp"

Bank::~Bank()
{
    ;
}

Bank::Bank()
{
    std::cout << "Bank is created" << std::endl;
    this->liquidity = 999;
    this->customer_nbr = 1;
}

bool Bank::isValidCurrencyAmount(double amount)
{
    // Check if the amount has more than two digits after the decimal point
    double decimalPart = amount - static_cast<int>(amount);
    return decimalPart <= 0.99; // Allow up to two decimal places (cents)
}

void Bank::display_bank_info()
{
    std::cout << "Bank information : " << std::endl;
    std::cout << "Liquidity : " << this->liquidity << std::endl;
    std::cout << "Accounts: " << std::endl;
    std::map<int, Account>::const_iterator it;

    for (it = accounts.begin(); it != accounts.end(); ++it) {
        const Account& entry = it->second;
    std::cout << "ID: " << it->first << ", Value: " << entry.value << std::endl;
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
    std::map<int, Account>::iterator it; // Remove const qualifier
    it = accounts.find(id);
    if (it != accounts.end()) {
        it->second.value -= amount;
        std::cout << "money removed new value = " << it->second.value << std::endl;
}

}

void Bank::delete_account(int id)
{
    std::map<int, Account>::iterator it;
    it = accounts.find(id);
    if (it != accounts.end()) {
        accounts.erase(it);
        std::cout << "Account with ID " << id << " deleted successfully." << std::endl;
    } else {
        std::cout << "Account with ID " << id << " not found." << std::endl;
    }
}


void Bank::add_money(int id, double amount)
{
    if (this->isValidCurrencyAmount(amount))
        std::cout << "Valid currency amount. Money added." << std::endl;
    else {
        std::cout << "Invalid currency amount. Money not added." << std::endl;
        return;
    }

    // Check if the account with the given ID exists
    std::map<int, Account>::iterator it;
    it = accounts.find(id);
    if (it != accounts.end()) {
        double amountToDeposit = amount * 0.95;
        it->second.value += amountToDeposit;  // Deposit money into the account
        double bankCommission = amount * 0.05;
        liquidity += bankCommission;
        std::cout << "Account: " << id << " tried to add " << amount << ", bank took " << bankCommission << " and customer had " << amountToDeposit << std::endl;
    } else {
        std::cout << "Account with ID " << id << " does not exist." << std::endl;
    }
}

void Bank::loan(int id, double loanAmount)
{
    if (this->isValidCurrencyAmount(loanAmount))
        std::cout << "Valid currency amount. Loan accorded" << std::endl;
    else {
        std::cout << "Invalid currency amount. Loan not accorded" << std::endl;
        return;
    }

    if (loanAmount > liquidity) {
        std::cout << "Loan amount exceeds bank liquidity" << std::endl;
        return;
    }

    std::map<int, Account>::iterator it;
    it = accounts.find(id);
    if (it != accounts.end()) {
        add_money(it->first, loanAmount);
        liquidity -= loanAmount;
        std::cout << "Loan of " << loanAmount << " added to account with ID " << id << std::endl;
    } else {
        std::cout << "Account with ID " << id << " not found." << std::endl;
    }
}


void Bank::create_account(double value)
{
    if (!isValidCurrencyAmount(value)) {
        std::cout << "Invalid currency amount." << std::endl;
        return;
    }

    int accountId = customer_nbr++;
    add_account(accountId, value);
    std::cout << "Account with ID " << accountId << " created successfully." << std::endl;
}

void Bank::add_account(int accountId, double value)
{
    // Create a new Account object with the given accountId and value
    Account newAccount(accountId, value);

    // Insert the new Account into the accounts map
    accounts.insert(std::make_pair(accountId, newAccount));
}


const Bank::Account& Bank::operator[](int id) const {
    std::map<int, Account>::const_iterator it = accounts.find(id);
    if (it == accounts.end()) {
        throw std::runtime_error("Account not found");
    }
    return it->second;
}


