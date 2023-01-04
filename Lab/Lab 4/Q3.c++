#include <iostream>
using namespace std;

int main()
{
    int totalMarks, obtainedMarks;
    float per;

    cout << "Enter the total marks:";
    cin >> totalMarks;

    cout << "Enter the obtained marks:";
    cin >> obtainedMarks;

    per = (float(obtainedMarks) / float(totalMarks)) * 100;
    cout << "The percentage is:" << per << endl;

    switch (per >= 90 && per < 100)
    {

    case 1:
    {
        cout << "Grade A";
        break;
    }
    default:
    {
        switch (per >= 80 && per < 90)
        {
        case 1:
        {
            cout << "Grade B";
            break;
        }
        default:
        {
            switch (per >= 70 && per < 80)
            {
            case 1:
            {
                cout << "Grade C";
                break;
            }
            default:
            {
                switch (per >= 60 && per < 70)
                {
                case 1:
                {
                    cout << "Grade D";
                    break;
                }
                default:
                {
                    switch (per >= 40 && per < 50)
                    {
                    case 1:
                    {
                        cout << "Grade E";
                    }
                    default:
                    {
                        switch (per < 40 && per > 0)
                        {
                        case 1:
                        {
                            cout << "Grade F";
                            break;
                        }
                        default:
                        {
                            cout << "Error!";
                        }
                        }
                    }
                    }
                }
                }
            }
            }
        }
        }
    }
    }

    return 0;
}
