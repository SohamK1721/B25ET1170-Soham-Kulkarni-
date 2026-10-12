#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    char name[50];

public:
    void getPersonalDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

class Performance
{
protected:
    float score;

public:
    void getPerformance()
    {
        cout << "Enter Performance Score (0-100): ";
        cin >> score;
    }
};

class Result : public Employee, public Performance
{
public:
    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Performance Score: " << score << endl;

        cout << "Performance Grade: ";

        if (score >= 90)
            cout << "A";
        else if (score >= 75)
            cout << "B";
        else if (score >= 60)
            cout << "C";
        else if (score >= 40)
            cout << "D";
        else
            cout << "F";

        cout << endl;
    }
};

int main()
{
    Result r;

    r.getPersonalDetails();
    r.getPerformance();
    r.display();

    return 0;
}
