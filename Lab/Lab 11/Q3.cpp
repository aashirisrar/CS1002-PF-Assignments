#include <iostream>
using namespace std;

struct Circle
{
    float diameter;

    void PrintAreaOfCircle()
    {
        const float pi = 3.14;
        float radius = diameter / 2;
        float area = pi * radius * radius;

        cout << "The radius of the circle is: " << radius << endl;
        cout << "The area of the circle is: " << area;
    }
};

int main()
{
    Circle sCircle;

    cout << "Enter the diameter of the circle: ";
    cin >> sCircle.diameter;

    sCircle.PrintAreaOfCircle();

    return 0;
}