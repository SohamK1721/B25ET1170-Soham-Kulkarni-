#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void Accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void Display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }

    void Conjugate()
    {
        imag = -imag;
    }
};

int main()
{
    Complex c;

    c.Accept();

    cout << "Original complex number: ";
    c.Display();

    c.Conjugate();

    cout << "Complex conjugate: ";
    c.Display();

    return 0;
}
