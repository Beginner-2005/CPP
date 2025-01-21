#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account;
    account.setId(1122);
    account.setBalance(20000);
    account.setAnnualInterestRate(4.5);

    try {
        account.withdraw(2500);
        account.deposit(3000);

        cout << "Account ID: " << account.getId() << endl;
        cout << "Balance: $" << account.getBalance() << endl;
        cout << "Monthly Interest Rate: " << account.getMonthlyInterestRate() << "%" << endl;
    } catch (const char* e) {
        cout << "Error: " << e << endl;
    }

    return 0;
}
