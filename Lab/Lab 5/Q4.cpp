#include <iostream>
using namespace std;

int main()
{
    int n;
    char sym;

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Enter the symbol to draw with: ";
    cin >> sym;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n - i)
        {
            cout << " ";
            j++;
        }

        int k = 1;

        while (k <= i)
        {
            if (k == 1 || k == i)
            {
                cout << sym << " ";
            }
            else
            {
                cout << "  ";
            }

            k++;
        }

        cout << endl;

        i++;
    }

    i = 1;

    int m = n;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << " ";
            j++;
        }

        int k = m - 1;

        while (k >= 1)
        {
            if (k == 1 || k == m - 1 || k == i - 1)
            {
                cout << sym << " ";
            }
            else
            {
                cout << "  ";
            }
            k--;
        }
        cout << endl;

        m--;

        i++;
    }
}