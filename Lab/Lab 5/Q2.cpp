#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    int m = 5;

    while (i < 5)
    {
        int j = 2;

        while (j <= i)
        {
            cout << " ";
            j++;
        }

        int k = m;

        while (k >= 1)
        {
            cout << "* ";
            k--;
        }
        cout << endl;

        m--;

        i++;
    }

    i = 1;

    while (i <= 5)
    {
        int j = 1;

        while (j <= 5 - i)
        {
            cout << " ";
            j++;
        }

        int k = 1;

        while (k <= i)
        {
            cout << "* ";
            k++;
        }

        cout << endl;

        i++;
    }

    return 0;
}