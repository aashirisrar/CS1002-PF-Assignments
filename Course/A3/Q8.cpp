#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    srand(time(0));

    int totalMarbles = rand() % 90 + 10;
    int firstTurn = rand() % 2;
    int computerDifficulty = rand() % 2;
    int marbleTakenByUser;
    int marbleTakenByComputer;

    cout << "The total pile of marbles: " << totalMarbles << endl;
    cout << "The first turn is:" << firstTurn << endl;
    cout << "The computer difficulty is:" << computerDifficulty << endl
         << endl;

    if (firstTurn == 0)
    {
        /* Human First Turn */
        while (totalMarbles > 0)
        {
            cout << "Enter the number of marbles to take:";
            cin >> marbleTakenByUser;

            // If player takes the last marble he loses
            if (totalMarbles == 1)
            {
                totalMarbles = totalMarbles - marbleTakenByUser;
                cout << "The marbles left are" << totalMarbles << endl;
                cout << "Computer Won!";
                break;
            }

            // loop until the user enter a number between zero and half the pile
            while (marbleTakenByUser < 0 || marbleTakenByUser > totalMarbles / 2)
            {
                cout << "Enter the number of marbles to take:";
                cin >> marbleTakenByUser;
            }
            if (marbleTakenByUser > 0 && marbleTakenByUser <= totalMarbles / 2)
            {
                totalMarbles = totalMarbles - marbleTakenByUser;
                cout << "The marbles left are: " << totalMarbles << endl
                     << endl;

                if (computerDifficulty == 0)
                {
                    /* Stupid */

                    // If computer takes the last marble it loses
                    if (totalMarbles == 1)
                    {
                        totalMarbles = totalMarbles - 1;
                        cout << "The marbles left are:" << totalMarbles << endl;
                        cout << "Human Won!";
                        break;
                    }

                    marbleTakenByComputer = (rand() % (totalMarbles / 2)) + 1;
                    totalMarbles = totalMarbles - marbleTakenByComputer;
                    cout << "The marbles taken by computer are:" << marbleTakenByComputer << endl;
                    cout << "The marbles left are:" << totalMarbles << endl
                         << endl;
                }
                else
                {
                    /* Smart */

                    // If computer takes the last marble it loses
                    if (totalMarbles == 1)
                    {
                        totalMarbles = totalMarbles - 1;
                        cout << "The marbles left are:" << totalMarbles << endl;
                        cout << "Human Won!";
                        break;
                    }

                    if (totalMarbles == 3 || totalMarbles == 7 || totalMarbles == 15 || totalMarbles == 31 || totalMarbles == 63)
                    {
                        marbleTakenByComputer = (rand() % (totalMarbles / 2)) + 1;
                    }
                    else
                    {
                        marbleTakenByComputer = (totalMarbles / 2) - 1;
                    }

                    totalMarbles = totalMarbles - marbleTakenByComputer;
                    cout << "The marbles taken by computer are:" << marbleTakenByComputer << endl;
                    cout << "The marbles left are:" << totalMarbles << endl
                         << endl;
                }
            }
        }
    }
    else
    {
        /* Computer First Turn */

        while (totalMarbles > 0)
        {
            if (computerDifficulty == 0)
            {
                /* Stupid */

                // If computer takes the last marble it loses
                if (totalMarbles == 1)
                {
                    totalMarbles = totalMarbles - 1;
                    cout << "The marbles left are:" << totalMarbles << endl;
                    cout << "Human Won!";
                    break;
                }

                marbleTakenByComputer = (rand() % (totalMarbles / 2)) + 1;
                totalMarbles = totalMarbles - marbleTakenByComputer;
                cout << "The marbles taken by computer are:" << marbleTakenByComputer << endl;
                cout << "The marbles left are:" << totalMarbles << endl
                     << endl;
            }
            else
            {
                /* Smart */

                // If computer takes the last marble it loses
                if (totalMarbles == 1)
                {
                    totalMarbles = totalMarbles - 1;
                    cout << "The marbles left are:" << totalMarbles << endl;
                    cout << "Human Won!";
                    break;
                }

                if (totalMarbles == 3 || totalMarbles == 7 || totalMarbles == 15 || totalMarbles == 31 || totalMarbles == 63)
                {
                    marbleTakenByComputer = (rand() % (totalMarbles / 2)) + 1;
                }
                else
                {
                    marbleTakenByComputer = (totalMarbles / 2) - 1;
                }

                totalMarbles = totalMarbles - marbleTakenByComputer;
                cout << "The marbles taken by computer are:" << marbleTakenByComputer << endl;
                cout << "The marbles left are:" << totalMarbles << endl
                     << endl;
            }

            cout << "Enter the number of marbles to take:";
            cin >> marbleTakenByUser;

            // If player takes the last marble he loses
            if (totalMarbles == 1)
            {
                totalMarbles = totalMarbles - marbleTakenByUser;
                cout << "The marbles left are" << totalMarbles << endl;
                cout << "Computer Won!";
                break;
            }

            // loop until the user enter a numbe between zero and half the pile
            while (marbleTakenByUser < 0 || marbleTakenByUser > totalMarbles / 2)
            {
                cout << "Enter the number of marbles to take:";
                cin >> marbleTakenByUser;
            }
            if (marbleTakenByUser > 0 && marbleTakenByUser <= totalMarbles / 2)
            {
                totalMarbles = totalMarbles - marbleTakenByUser;
                cout << "The marbles left are: " << totalMarbles << endl
                     << endl;
            }
        }
    }

    return 0;
}
