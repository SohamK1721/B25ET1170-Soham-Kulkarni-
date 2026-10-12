#include <iostream>
using namespace std;

class Shape
{
public:
    // Volume of cube
    void volume(int side)
    {
        cout << "Volume of Cube: "
             << side * side * side << endl;
    }

    // Volume of cuboid
    void volume(int length, int breadth, int height)
    {
        cout << "Volume of Cuboid: "
             << length * breadth * height << endl;
    }
};

int main()
{
    Shape s;
    int side, length, breadth, height;

    cout << "Enter side of cube: ";
    cin >> side;
    s.volume(side);

    cout << "Enter length, breadth and height of cuboid: ";
    cin >> length >> breadth >> height;
    s.volume(length, breadth, height);

    return 0;
}
