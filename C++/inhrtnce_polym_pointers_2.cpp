#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accNo;
    double balance;

public:
    BankAccount(int a, double b) : accNo(a), balance(b) {}

    virtual void deposit(double amt) { balance += amt; }

    virtual void withdraw(double amt) = 0;   // Pure virtual

    virtual void display() const {
        cout << "Acc No: " << accNo 
             << "\nBalance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
    double minBalance;

public:
    SavingsAccount(int a, double b, double m)
        : BankAccount(a, b), minBalance(m) {}

    void withdraw(double amt) override {
        if (balance - amt >= minBalance)
            balance -= amt;
        else
            cout << "Minimum balance required!\n";
    }
};

class CheckingAccount : public BankAccount {
    double limit;

public:
    CheckingAccount(int a, double b, double l)
        : BankAccount(a, b), limit(l) {}

    void withdraw(double amt) override {
        if (balance - amt >= -limit)
            balance -= amt;
        else
            cout << "Overdraft limit exceeded!\n";
    }
};

int main() {
    BankAccount* acc[2];

    acc[0] = new SavingsAccount(101, 5000, 1000);
    acc[1] = new CheckingAccount(102, 2000, 1500);

    for (int i = 0; i < 2; i++) {
        acc[i]->deposit(500);
        acc[i]->withdraw(3000);
        acc[i]->display();
        delete acc[i];
        cout << endl;
    }

    return 0;
}