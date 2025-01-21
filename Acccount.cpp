#include "Account.h"


Account::Account() : id(0), balance(0), annualInterestRate(0) {}

int Account::getId() const {
    return id;
}

double Account::getBalance() const {
    return balance;
}

double Account::getAnnualInterestRate() const {
    return annualInterestRate;
}

void Account::setId(int newId) {
    id = newId;
}

void Account::setBalance(double newBalance) {
    balance = newBalance;
}

void Account::setAnnualInterestRate(double newRate) {
    annualInterestRate = newRate;
}


double Account::getMonthlyInterestRate() const {
    return annualInterestRate / 12;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
    
        throw "Insufficient balance!";
    }
}


void Account::deposit(double amount) {
    balance += amount;
}
