#include <iostream>
using namespace std;

int main()
{
    int n;
    int dig;
    int sumOfEveryOtherDig = 0;
    int sumOfOtherDig = 0;

    cout << "Enter a number:";
    cin >> n;

    if (n >= 10000000 && n <= 99999999)
    {
        int temp = n;
        int z = n;

        int checkDig = n % 10;

        for (int i = 1; n > 0; i++)
        {
            dig = n % 10;

            n = n / 100;

            sumOfEveryOtherDig = sumOfEveryOtherDig + dig;
        }

        cout << "The sum of every other dig is(last ones):" << sumOfEveryOtherDig << endl;

        for (int i = 1; temp > 0; i++)
        {
            if (i == 1)
            {
                temp = temp / 10;
            }
            else
            {
                temp = temp / 10;
                temp = temp / 10;
            }

            dig = temp % 10;

            dig = dig * 2;

            int indDig1 = dig % 10;

            dig = dig / 10;

            int indDig2 = dig % 10;

            int sum = indDig1 + indDig2;

            sumOfOtherDig = sumOfOtherDig + sum;
        }

        cout << "the sum of other digs is(second last ones):" << sumOfOtherDig << endl;

        int x = sumOfEveryOtherDig + sumOfOtherDig;
        cout << "the sum of both is:" << x << endl;

        if (x % 10 == 0)
        {
            cout << "It is a valid number!";
        }
        else
        {
            cout << "The card nubmer is not valid!" << endl;
            z = ((z - (x) % 10)) % 10;
            cout << "Check digit for a valid card number:" << z;
        }
    }
    else
    {
        cout << "Error! Enter an eight digit card number!";
    }
    return 0;
}
