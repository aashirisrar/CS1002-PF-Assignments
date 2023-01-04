#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 1;
    int num3;
    int n;
    int i = 2;

    cout << "Enter the number of elements:";
    cin >> n;

    cout << "The Fibonacci Series: " << num1 << " " << num2 << " ";

    while (i < n)
    {
        num3 = num1 + num2;

        cout << num3 << " ";

        num1 = num2;
        num2 = num3;

        i++;
    }

    return 0;
}