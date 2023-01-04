#include <iostream>
using namespace std;

int main()
{
    int spc;

    cout << "Enter the number of rows:";
    cin >> spc;

    for (int i = 1; i <= spc; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= spc - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < spc; i++)
    {
        for (int j = 1; j <= spc - i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= spc - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}