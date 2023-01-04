#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int i = 1;
    float num, sum;

    cout << "Input the value for nth term:";
    cin >> n;

    while (i <= n)
    {
        num = float(1 / (pow(i, i)));
        sum = sum + num;

        cout << "1/" << i << "^" << i << '=' << num << endl;

        i++;
    }

    cout << "The sum of the above series is:" << sum;

    return 0;
}