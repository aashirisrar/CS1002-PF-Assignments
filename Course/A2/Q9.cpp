#include <iostream>
using namespace std;

int main()
{
    float ang1, ang2, ang3, sum;

    cout << "Enter the first angle:";
    cin >> ang1;
    cout << "Enter the second angle:";
    cin >> ang2;
    cout << "Enter the third angle:";
    cin >> ang3;

    if (ang1 > 0 && ang2 > 0 && ang3 > 0)
    {
        sum = ang1 + ang2 + ang3;

        if (sum == 180)
        {
            cout << "Valid Triangle";
        }
        else
        {
            cout << "A triangle cannot be formed using these angles.";
        }
    }
    else
    {
        cout << "Error! The angles cannot be negative or zero!";
    }
    return 0;
}