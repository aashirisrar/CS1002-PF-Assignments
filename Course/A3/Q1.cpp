#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x;
    int p1 = 0;
    int p2 = 0;
    srand(time(0));

    for (int i = 1;; i++)
    {
        x = (rand() % 6) + 1;

        p1 = p1 + x;

        if (p1 <= 20)
        {
            cout << "Player 1's turn: " << x << endl;

            getch();

            cout << "Player 1's total: " << p1 << endl
                 << endl;

            if (p1 == 20)
            {
                cout << "Player 1 Won!!!";
                break;
            }

            getch();
        }

        else
        {
            cout << "Player 1's turn: " << x << endl;

            getch();

            cout << "Player 1's total: " << p1 << " (move not possible)" << endl
                 << endl;

            p1 = p1 - x;

            getch();
        }

        x = (rand() % 6) + 1;

        p2 = p2 + x;

        if (p2 <= 20)
        {
            cout << "Player 2's turn: " << x << endl;

            getch();

            cout << "Player 2's total: " << p2 << endl
                 << endl;

            if (p2 == 20)
            {
                cout << "Player 2 Won!!!";
                break;
            }

            getch();
        }

        else
        {
            cout << "Player 2's turn: " << x << endl;

            getch();

            cout << "Player 2's total: " << p2 << " (move not possible)" << endl
                 << endl;

            p2 = p2 - x;

            getch();
        }
    }

    return 0;
}