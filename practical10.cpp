
#include <iostream>
#include <exception>
using namespace std;

class InsufficientBalance : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient Balance! Transaction Failed.";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientBalance();
        }

        balance -= amount;
        cout << "Withdrawal Successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: E25b000062" << endl;
    cout << "--------------------------------" << endl;

    BankAccount account(5000);

    cout << "\nBANKING TRANSACTION" << endl;
    account.displayBalance();

    try {
        account.withdraw(2000);
        account.withdraw(4000);
    }
    catch (const InsufficientBalance& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
