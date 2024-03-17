#include "../includes/Bank.hpp"

int main()
{
    Bank bank = Bank();
    bank.create_account(500.1);
    bank.create_account(200);

    bank.display_bank_info();

    bank.add_money(1, 10);
    bank.display_bank_info();

    bank.delete_money(1, 10);
    bank.display_bank_info();

    bank.loan(1, 310.500);
    bank.display_bank_info();

    bank.set_value(1, 2);
    bank.display_bank_info();
    return 0;
}