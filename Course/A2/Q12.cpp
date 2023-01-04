#include <iostream>
using namespace std;

int main()
{
    float m1, m2, m3, x1, x2, x3, y1, y2, y3, areaOfTri;

    cout << "Enter the values for point X(x, y):";
    cin >> x1 >> y1;

    cout << "Enter the values for point Y(x, y):";
    cin >> x2 >> y2;

    cout << "Enter the values for point Z(x, y):";
    cin >> x3 >> y3;

    // Slope method

    // XY
    m1 = (y2 - y1) / (x2 - x1);

    // YZ
    m2 = (y2 - y3) / (x2 - x3);

    // XZ
    m3 = (y3 - y1) / (x3 - x1);

    cout << "With slope method:" << endl;

    if (m1 == m2 == m3)
    {
        cout << "The given points are collinear!" << endl
             << endl;
    }
    else
    {
        cout << "The given points are not collinear!" << endl
             << endl;
    }

    cout << "With area of triangle method:" << endl;
    // Area of triangle method
    areaOfTri = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

    if (areaOfTri == 0)
    {
        cout << "The given points are collinear!";
    }
    else
    {
        cout << "The given points are not collinear!";
    }

    return 0;
}
