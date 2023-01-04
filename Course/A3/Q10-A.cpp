#include <iostream>
using namespace std;

int main()
{
    int spc;

    cout << "Please enter the number of rows: ";
    cin >> spc;

    for (int i = 0; i <= spc; i++)
    {
        /* upper portion */

        // left spaces
        for (int j = 1; j <= spc - i + 1; j++)
        {
            cout << "*";
        }
        // left half pyramid
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // right half pyramid
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // right spaces
        for (int j = 1; j <= spc - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = spc; i >= 0; i--)
    {
        /* down portion */

        // left spaces
        for (int j = 1; j <= spc - i + 1; j++)
        {
            cout << "*";
        }
        // left half pyramid
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // right half pyramid
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // right spaces
        for (int j = 1; j <= spc - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}