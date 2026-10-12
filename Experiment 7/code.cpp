#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;

public:
    // Constructor
    String()
    {
        str = new char[100];
    }

    // Accept string
    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    // Display string
    void Display()
    {
        cout << "String is: " << str << endl;
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String s;

    s.Accept();
    s.Display();

    return 0;
}
