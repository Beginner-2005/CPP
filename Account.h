
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int id;
    double balance;
    double annualInterestRate;

public:

    Account();


    int getId() const;
    double getBalance() const;
    double getAnnualInterestRate() const;

    void setId(int newId);
    void setBalance(double newBalance);
    void setAnnualInterestRate(double newRate);
    double getMonthlyInterestRate() const;

    void withdraw(double amount);
    void deposit(double amount);
};

#endif
