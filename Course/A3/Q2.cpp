#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime;
    bool flag = false;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 2; i <= n / 2; ++i)
    {
        isPrime = true;

        if (i == 0 || i == 1)
        {
            isPrime = false;
        }

        for (int j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            isPrime = true;

            if (n - i == 0 || n - i == 1)
            {
                isPrime = false;
            }

            for (int k = 2; k <= (n - i) / 2; ++k)
            {
                if ((n - i) % k == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
    {
        cout << n << " This number cannot be expressed as sum of two prime numbers!";
    }

    return 0;
}
