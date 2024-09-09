#include <iostream>

class Transaction;

class BankAccount
{
private:
    int accountNumber;
    double balance;

    // Declare PrintStatement as a friend function
    // This means PrintStatement can access private members of BankAccount
    friend void PrintStatement(const BankAccount &account);

    // Declare Transaction class as a friend class
    // This means Transaction class can access private members of BankAccount
    friend class Transaction;

public:
    BankAccount(int accountNumber, double balance)
        : accountNumber(accountNumber), balance(balance) {}
};

// Friend function to print account statement
// Can access private members of BankAccount because it's a friend function
void PrintStatement(const BankAccount &account)
{
    std::cout << "Account Number: " << account.accountNumber << std::endl;
    std::cout << "Balance: " << account.balance << std::endl;
}

// Transaction class
// Can access private members of BankAccount because it's a friend class
class Transaction
{
public:
    void deposit(BankAccount &account, double amount)
    {
        // Accessing private member balance of BankAccount
        account.balance += amount;
    }

    void withdraw(BankAccount &account, double amount)
    {
        // Accessing private member balance of BankAccount
        if (account.balance >= amount)
        {
            account.balance -= amount;
        }
        else
        {
            std::cout << "Insufficient balance!" << std::endl;
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