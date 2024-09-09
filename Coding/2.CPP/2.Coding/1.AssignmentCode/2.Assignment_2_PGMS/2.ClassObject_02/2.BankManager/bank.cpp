#include <iostream>
using namespace std;
class Transaction;
class BankAccount
{
private:
    int accountNumber;
    double balance;

    friend void PrintStatement(const BankAccount &account);
    friend class Transaction;

public:
    // note: I using constructor here
    BankAccount(int accountNumber, double balance)
        : accountNumber(accountNumber), balance(balance) {}
    ~BankAccount() {};
};

void PrintStatement(const BankAccount &account)
{
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Balance: " << account.balance << endl;
}

class Transaction
{
public:
    void deposit(BankAccount &account, double amount)
    {
        account.balance += amount;
    }

    void withdraw(BankAccount &account, double amount)
    {
        if (account.balance >= amount)
        {
            account.balance -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main()
{
    BankAccount account(12345, 1000.0);
    PrintStatement(account);

    Transaction transaction;
    transaction.deposit(account, 500.0);
    PrintStatement(account);

    transaction.withdraw(account, 200.0);
    PrintStatement(account);

    return 0;
}