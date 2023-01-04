#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int multipleCountThree = 0;
    int multipleCountFive = 0;
    int i;

    cout << "Enter the first integer:";
    cin >> a;

    cout << "Enter the second integer:";
    cin >> b;

    i = a + 1;

    while (i < b)
    {
        if (i % 3 == 0)
        {
            multipleCountThree++;
        }
        if (i % 5 == 0)
        {
            multipleCountFive++;
        }

        i++;
    }

    cout << "The number of multiples of 3 between " << a << " and " << b << " are:" << multipleCountThree << endl;
    cout << "The number of multiples of 5 between " << a << " and " << b << " are:" << multipleCountFive;

    return 0;
}