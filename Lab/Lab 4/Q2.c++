#include <iostream>
using namespace std;

int main()
{
    int a, b, res;
    float div;
    char op;

    cout << "Enter the operation to be performed +,-,*,/: ";
    cin >> op;

    cout << "Enter the first number:";
    cin >> a;

    cout << "Enter the second number:";
    cin >> b;

    switch (op)
    {
    case '+':
    {
        res = a + b;
        cout << "The sum is:" << res;
        break;
    }
    case '-':
    {
        res = a - b;
        cout << "The result of subtraction is:" << res;
        break;
    }
    case '*':
    {
        res = a * b;
        cout << "The product is:" << res;
        break;
    }
    case '/':
    {
        if (b != 0)
        {
            div = a / b;
            cout << "The result of division is:" << div;
        }
        else
        {
            cout << "Error! Cannot divide by zero!";
        }

        break;
    }

    default:
    {
        cout << "Ivalid operator used!";

        break;
    }
    }

    return 0;
}