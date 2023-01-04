#include <iostream>
using namespace std;

int main()
{
    int r, div, dis;
    float q;

    cout << "Enter the dividend:";
    cin >> div;

    cout << "Enter the divisor:";
    cin >> dis;

    if (dis != 0)
    {

        q = float(div) / float(dis);

        r = div % dis;

        cout << "The quotient is:" << q << endl;
        cout << "The remainder is:" << r;
    }
    else
    {
        cout << "Error! Cannot divide by zero!";
    }

    return 0;
}