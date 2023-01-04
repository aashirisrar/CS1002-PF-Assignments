#include <iostream>
using namespace std;

int main()
{
    int spc = 5;

    for (int i = 1; i <= spc; i++)
    {
        for (int j = 1; j <= spc - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}