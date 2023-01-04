#include <iostream>
using namespace std;

int main()
{
    float amountDue, amountRec;
    int change;
    int dollars, quarters, dimes, nickels, pennies, rem;

    cout << "Enter the amount due in cents:";
    cin >> amountDue;

    cout << "Enter the amount recieved in cents:";
    cin >> amountRec;

    change = amountRec - amountDue;

    dollars = change / 100;

    rem = change % 100;

    quarters = rem / 25;

    dimes = (rem % 25) / 10;

    nickels = ((rem % 25) % 10) / 5;

    pennies = (((rem % 25) % 10) % 5) / 1;

    cout << "The dollars are:" << dollars << endl;
    cout << "The quarters are:" << quarters << endl;
    cout << "The dimes are:" << dimes << endl;
    cout << "The nickels are:" << nickels << endl;
    cout << "The pennies are:" << pennies;

    return 0;
}
