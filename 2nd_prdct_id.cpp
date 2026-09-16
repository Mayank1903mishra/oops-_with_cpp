#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accntNO;
    string customerName;
    int balance;

public:

    BankAccount(int A, string C, int b) {
        accntNO = A;
        customerName = C;
        balance = b;
    }

    void display() const {
        cout << "Account No: " << accntNO << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }

    friend void compareBalance(const BankAccount& a1, const BankAccount& a2);
};


void compareBalance(const BankAccount& a1, const BankAccount& a2) {
    cout << "Account holder with higher balance:" << endl;
    if (a1.balance >= a2.balance)
        a1.display();
    else
        a2.display();
}

int main() {
    BankAccount b1(1001, "Vikas", 175000);
    BankAccount b2(1002, "Vivek", 82000);

    compareBalance(b1, b2);

    return 0;
}
