#include <iostream>
using namespace std;

int main()
{
    int choice;
    int n;
    int r;
    int fact = 1;

    cout << "Enter a number from the menu to perform an action " << endl;
    cout << "1- Print Factorial of Number " << endl;
    cout << "2- Print nPr " << endl;
    cout << "3- Print nCr " << endl;
    cout << "4- Print nCr(different method) " << endl;
    cout << "5- Exit Program " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        /* factorial */
        cout << "Enter a number to print its factorial: ";
        cin >> n;

        if (n > 0)
        {
            for (int i = n; i > 0; i--)
            {
                fact = fact * i;
            }
            cout << "The factorial of " << n << " is:" << fact;
        }
        else if (n == 0)
        {
            fact = 1;
            cout << "The factorial of " << n << " is:" << fact;
        }
        else
        {
            cout << "Error! Factorial is not defined for negative nubmers!";
        }

        break;
    }
    case 2:
    {
        int per, factOfSub = 1;

        /* permutation */

        cout << "Enter a number: ";
        cin >> n;

        cout << "Enter a value for the r: ";
        cin >> r;

        for (int i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        for (int i = n - r; i > 0; i--)
        {
            factOfSub = factOfSub * i;
        }

        per = fact / factOfSub;

        cout << "The number of permutations are: " << per;

        break;
    }
    case 3:
    {
        /* combinations */

        int com, factOfSub = 1, factOfR = 1;

        cout << "Enter a number: ";
        cin >> n;

        cout << "Enter a value for the r: ";
        cin >> r;

        for (int i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        for (int i = n - r; i > 0; i--)
        {
            factOfSub = factOfSub * i;
        }
        for (int i = r; i > 0; i--)
        {
            factOfR = factOfR * i;
        }

        com = (fact / factOfSub) * factOfR;

        cout << "The number of combinations are: " << com;

        break;
    }
    case 4:
    {
        /* different way of combinations */
        int per, com, factOfSub = 1, factOfR = 1;

        cout << "Enter a number: ";
        cin >> n;

        cout << "Enter a value for the r: ";
        cin >> r;

        for (int i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        for (int i = n - r; i > 0; i--)
        {
            factOfSub = factOfSub * i;
        }
        for (int i = r; i > 0; i--)
        {
            factOfR = factOfR * i;
        }

        per = fact / factOfSub;

        com = per * factOfR;

        cout << "The number of combinations are: " << com;

        break;
    }
    case 5:
    {
        /* exit */
        break;
    }

    default:
        cout << "Error! Invalid Input!" << endl;
        break;
    }

    return 0;
}