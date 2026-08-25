#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;   // Data hiding

public:
    // Function to initialize account
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit operation
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Amount!" << endl;
        }
    }

    // Withdrawal operation
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance or Invalid Amount!" << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount account;

    account.createAccount();

    account.deposit(2000);
    account.withdraw(1000);

    account.display();

    return 0;
}