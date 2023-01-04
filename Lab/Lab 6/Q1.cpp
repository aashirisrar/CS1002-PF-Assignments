#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;
    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    int fourCount = 0;
    int fiveCount = 0;
    int sixCount = 0;
    int sevenCount = 0;
    int eightCount = 0;
    int nineCount = 0;
    int zeroCount = 0;

    cout << "Enter a number:";
    cin >> n;

    for (int i; n > 0; i++)
    {
        num = n % 10;
        n = n / 10;

        if (num == 1)
        {
            oneCount++;
        }
        else if (num == 2)
        {
            twoCount++;
        }
        else if (num == 3)
        {
            threeCount++;
        }
        else if (num == 4)
        {
            fourCount++;
        }
        else if (num == 5)
        {
            fiveCount++;
        }
        else if (num == 6)
        {
            sixCount++;
        }
        else if (num == 7)
        {
            sevenCount++;
        }
        else if (num == 8)
        {
            eightCount++;
        }
        else if (num == 9)
        {
            nineCount++;
        }
        else if (num == 0)
        {
            zeroCount++;
        }
    }

    if (oneCount > 0)
    {
        cout << "The number of one are:" << oneCount << endl;
    }
    if (twoCount > 0)
    {
        cout << "The number of two are:" << twoCount << endl;
    }
    if (threeCount > 0)
    {
        cout << "The number of three are:" << threeCount << endl;
    }
    if (fourCount > 0)
    {
        cout << "The number of four are:" << fourCount << endl;
    }
    if (fiveCount > 0)
    {
        cout << "The number of five are:" << fiveCount << endl;
    }
    if (sixCount > 0)
    {
        cout << "The number of six are:" << sixCount << endl;
    }
    if (sevenCount > 0)
    {
        cout << "The number of seven are:" << sevenCount << endl;
    }
    if (eightCount > 0)
    {
        cout << "The number of eight are:" << eightCount << endl;
    }
    if (nineCount > 0)
    {
        cout << "The number of nine are:" << nineCount << endl;
    }
    if (zeroCount > 0)
    {
        cout << "The number of zeros are:" << zeroCount << endl;
    }

    return 0;
}