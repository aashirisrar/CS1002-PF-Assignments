#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    int m = 2;

    while (i <= 5)
    {
        int j = 2;

        while (j <= i)
        {
            cout << " ";
            j++;
        }

        int k = m;

        while (k <= 11 - i)
        {

            cout << k - i;
            k++;

            if (k == 12 - i)
            {
                int j = 2;

                while (j <= i)
                {
                    cout << "  ";
                    j++;
                }

                k = m;

                while (k <= 11 - i)
                {
                    cout << k - i;
                    k++;
                }
            }
        }
        cout << endl;

        m++;

        i++;
    }

    return 0;
}