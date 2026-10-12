#include <iostream>
using namespace std;

class Bank
{
    float balance;

public:
    void deposit()
    {
        cout << "Enter bank balance: ";
        cin >> balance;
    }

    void withdraw(float amount)
    {
        try
        {
            if (amount > balance)
                throw amount;

            balance = balance - amount;
            cout << "Withdrawal successful!" << endl;
            cout << "Remaining balance: " << balance << endl;
        }
        catch (float amount)
        {
            cout << "Exception: Insufficient balance!" << endl;
            cout << "Withdrawal amount: " << amount << endl;
        }
    }
};

int main()
{
    Bank b;
    float amount;

    b.deposit();

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    b.withdraw(amount);

    return 0;
}
