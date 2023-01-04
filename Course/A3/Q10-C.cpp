#include <iostream>
using namespace std;

int main()
{
    int rows;
    char sym;

    cout << "Enter Number : ";
    cin >> rows;

    cout << "Enter character to print: ";
    cin >> sym;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows; j++)
        {
            if (j == i || j == rows - i)
            {
                cout << " ";
            }
            else
            {
                cout << sym;
            }
        }
        cout << endl;
    }

    return 0;
}