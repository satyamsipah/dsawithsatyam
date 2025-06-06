#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    float balance;
public:

    //setters
    void setaccountNumber(int AN) {
        accountNumber = AN;
    }

    void setbalance(float bal) {
        balance = bal;
    }

    //getters
    int getaccountNumber() {
        return accountNumber;
    }

    float getbalance() {
        return balance;
    }

    void deposit(int money) {
        balance = balance + money;
    }

    void withdraw(int money) {
        if(money <= balance) {
            balance -= money;
        } else {
            cout << "insufficient balance" << endl;
        }
    }

};

int main() {
    BankAccount acc1;
    acc1.setaccountNumber(4185809);
    cout << acc1.getaccountNumber() << endl;
    acc1.setbalance(100000);
    cout << acc1.getbalance() << endl;

    acc1.deposit(1000);
    cout << "after deposit : " << acc1.getbalance() << endl;
    acc1.withdraw(1000);
    cout << "after withdraw : " << acc1.getbalance() << endl;
    acc1.withdraw(200000);

    

    return 0;
}