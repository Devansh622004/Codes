# include<iostream>
using namespace std;

// Base Class
class BankAccount
{
    public:
        int accno;
        int balance;
        int deposit_amnt;
        int withdrawl_amnt;
        int Deposit(){
            cout << "Enter Your Account No.: ";
            cin >> accno;
            cout << "Enter the Amount of Money you Want to Deposit: ";
            cin >> deposit_amnt;
        }
        int Withdraw(){
            cout << "Enter Withdrawl Amount: ";
            cin >> withdrawl_amnt;
        }
};

class SavingsAccount: public BankAccount
{

};

class CheckingAccount: public BankAccount
{

};

int main()
{

return 0;
}