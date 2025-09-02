#include "Bankaccount.hpp"

int main() {
    // Create a Bankaccount object
    bankAccount account("Alice Smith", 1000.0);

    account.displayBalance();

    // Valid deposit
    account.deposit(200.0);
    account.displayBalance();

    // Invalid deposit
    account.deposit(-50.0);
    account.displayBalance();

    // Valid withdrawal
    account.withdraw(150.0);
    account.displayBalance();

    // Invalid withdrawal (negative)
    account.withdraw(-30.0);
    account.displayBalance();

    // Invalid withdrawal (insufficient funds)
    account.withdraw(2000.0);
    account.displayBalance();

    return 0;
}