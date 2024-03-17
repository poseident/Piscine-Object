#include "../includes/Bank_bonus.hpp"

#include <iostream>
// Include the header file where Bank class is declared


int main() {
    try {
        Bank bank;

        // Creating two accounts
        bank.create_account(500.0);
        bank.create_account(1000.0);
        bank.display_bank_info();

        bank.add_money(1, 10);
        bank.display_bank_info();

        bank.delete_account(1);
        bank.display_bank_info();

        bank.loan(1, 20);
        bank.loan(2, 100);
        bank.display_bank_info();

        bank.delete_money(2, 100.5);
    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}

