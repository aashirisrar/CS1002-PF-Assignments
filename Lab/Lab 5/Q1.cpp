#include <iostream>
using namespace std;

int main()
{

    int i = 5;

    while (i >= 1)
    {
        int j = 1;

        while (j <= i)
        {
            cout << "*";

            j++;
        }

        cout << endl;

        i--;
    }

    i = 1;

    while (i <= 5)
    {
        int j = 1;

        while (j <= i)
        {
            cout << "*";

            j++;
        }

        cout << endl;

        i++;
    }
    return 0;
}