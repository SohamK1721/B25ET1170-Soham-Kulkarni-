#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + (" << imag << ")i" << endl;
    }

    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2;

    c1.getData();

    c2 = -c1;  // Overloading unary minus operator

    cout << "Original complex number: ";
    c1.display();

    cout << "Negative complex number: ";
    c2.display();

    return 0;
}
