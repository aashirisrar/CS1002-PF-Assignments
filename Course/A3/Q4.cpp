#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double a = 1.0;

    cout << "Enter a number:";
    cin >> n;

    while (n != -1)
    {

        for (int i = 1; i <= 10; i++)
        {
            if (i == 1)
            {
                cout << "Let our initial guess be " << a << endl
                     << endl;
            }

            a = (a + (n / a)) / 2.0;

            cout << "The next better approximation is:" << setprecision(7) << a << endl;
        }
        cout << "\nThe calculated final square root is:" << setprecision(7) << a << endl
             << endl;

        cout << "Enter a number:";
        cin >> n;
    }

    return 0;
}