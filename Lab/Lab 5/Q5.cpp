#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 4)
    {
        int j = 1;

        while (j <= 22)
        {
            if (i == 1 || i == 3)
            {
                cout << "- ";
            }
            else
            {
                cout << " -";
            }

            j++;
        }
        cout << endl;

        i++;
    }

    return 0;
}