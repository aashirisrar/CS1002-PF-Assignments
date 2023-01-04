#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    int i = 1;
    int n;

    cout << "Enter the number of numbers you want to sum up:";
    cin >> n;

    while (i <= n)
    {
        cout << "Enter a postive number:";
        cin >> num;

        if (num < 0)
        {
            break;
        }
        else
        {
            sum = num + sum;
        }

        i++;
    }

    cout << "The sum is:" << sum;

    return 0;
}