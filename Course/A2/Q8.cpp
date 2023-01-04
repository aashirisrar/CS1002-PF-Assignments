#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the age of person A:";
    cin >> a;
    cout << "Enter the age of person B:";
    cin >> b;
    cout << "Enter the age of person C:";
    cin >> c;

    // Oldest
    if (a > b && a > c)
    {
        cout << "A is oldest" << endl;
    }
    if (b > a && b > c)
    {
        cout << "B is oldest" << endl;
    }
    if (c > a && c > b)
    {
        cout << "C is oldest" << endl;
    }

    // Youngest
    if (a < b && a < c)
    {
        cout << "A is youngest";
    }
    if (b < a && b < c)
    {
        cout << "B is youngest";
    }
    if (c < a && c < b)
    {
        cout << "C is youngest";
    }

    return 0;
}