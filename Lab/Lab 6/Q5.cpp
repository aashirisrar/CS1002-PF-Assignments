#include <iostream>
using namespace std;

int main()
{
    int spc = 10;

    for (int i = 5; i <= spc; i++)
    {
        // first pyramid
        for (int j = 1; j <= spc - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        // second pyramid
        for (int j = 1; j <= (spc - i) * 2; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        //  reverse pyramid
        if (i == spc)
        {
            cout << endl;

            for (int i = 1; i <= spc * 2 - 2; i++)
            {
                for (int k = 1; k <= i; k++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= (spc * 2) - i; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
        }

        cout << endl;
    }
    return 0;
}