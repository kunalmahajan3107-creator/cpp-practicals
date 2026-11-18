
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    // Constructor
    BankAccount(int accNo, float bal)
    {
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit function
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }

    // Withdraw function
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Display function
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    cout << "Student Name: Kunal Mahajan" << endl;
    cout << "URN: E25B000062" << endl;
    cout << "----------------------------" << endl;

    BankAccount account1(101, 5000);
    BankAccount account2(102, 3000);

    cout << "\nAccount 1 Details:" << endl;
    account1.display();

    account1.deposit(1000);
    account1.withdraw(500);

    cout << "\nUpdated Account 1 Details:" << endl;
    account1.display();

    cout << "\nAccount 2 Details:" << endl;
    account2.display();

    return 0;
}
