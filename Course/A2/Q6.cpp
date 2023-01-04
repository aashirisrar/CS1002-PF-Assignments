#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number:";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is positive!";
    }

    else if (num < 0)
    {
        cout << "The number is negative!";
    }

    else if (num == 0)
    {
        cout << "The number is equal to zero!";
    }
    else
    {
        cout << "Invalid Input!";
    }

    return 0;
}