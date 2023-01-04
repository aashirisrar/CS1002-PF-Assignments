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
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is oldest" << endl;
        }
        else
        {
            cout << "C is oldest" << endl;
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            cout << "B is oldest" << endl;
        }
        else
        {
            cout << "C is oldest" << endl;
        }
    }
    else if (c > a)
    {
        if (c > b)
        {
            cout << "C is oldest" << endl;
        }
        else
        {
            cout << "B is oldest" << endl;
        }
    }

    // Youngest
    if (a < b)
    {
        if (a < c)
        {
            cout << "A is youngest" << endl;
        }
        else
        {
            cout << "C is youngest" << endl;
        }
    }
    else if (b < a)
    {
        if (b < c)
        {
            cout << "B is youngest" << endl;
        }
        else
        {
            cout << "C is youngest" << endl;
        }
    }
    else if (c < a)
    {
        if (c < b)
        {
            cout << "C is youngest" << endl;
        }
        else
        {
            cout << "B is youngest" << endl;
        }
    }
    return 0;
}