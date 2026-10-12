#include <iostream>
using namespace std;

class BankAccount
{
protected:
    float principal;

public:
    void getAmount()
    {
        cout << "Enter deposit amount: ";
        cin >> principal;
    }

    virtual void calculateInterest()
    {
        cout << "Interest calculation in BankAccount" << endl;
    }
};

class SavingsAccount : public BankAccount
{
public:
    void calculateInterest() override
    {
        cout << "Savings Account Interest: "
             << principal * 0.05 << endl;
    }
};

class CurrentAccount : public BankAccount
{
public:
    void calculateInterest() override
    {
        cout << "Current Account Interest: "
             << principal * 0.03 << endl;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;

    BankAccount *ptr;

    cout << "Savings Account\n";
    s.getAmount();
    ptr = &s;
    ptr->calculateInterest();

    cout << "\nCurrent Account\n";
    c.getAmount();
    ptr = &c;
    ptr->calculateInterest();

    return 0;
}
