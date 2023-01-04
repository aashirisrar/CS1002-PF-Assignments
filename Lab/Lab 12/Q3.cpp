#include <iostream>
using namespace std;

void InputData(float s[][5], int rows);
void AverageFood(float s[][5], int rows);
void LeastFood(float s[][5], int rows);
void GreatestFood(float s[][5], int rows);

int main()
{
    float arr[3][5];

    InputData(arr, 3);

    AverageFood(arr, 3);

    LeastFood(arr, 3);

    GreatestFood(arr, 3);

    return 0;
}

void InputData(float s[][5], int rows)
{
    cout << "-----Enter the data for 3 monkeys-----" << endl;

    for (int i = 0; i < rows; i++)
    {
        cout << "\nEnter the data for the monkey " << i + 1 << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the pound of food the monkey " << i + 1 << " ate on day " << j + 1 << ":";
            cin >> s[i][j];

            if (s[i][j] < 0)
            {
                cout << "Error! Enter the positive values!";
                exit(0);
            }
        }
    }
}

void AverageFood(float s[][5], int rows)
{
    float sumOfFoodEatenByMonkey1 = 0;
    float sumOfFoodEatenByMonkey2 = 0;
    float sumOfFoodEatenByMonkey3 = 0;
    float averageFoodMonkey1;
    float averageFoodMonkey2;
    float averageFoodMonkey3;
    float totalAverageFoodEatenByAllMonkeys;

    for (int j = 0; j < 5; j++)
    {
        sumOfFoodEatenByMonkey1 = sumOfFoodEatenByMonkey1 + s[0][j];
    }
    for (int j = 0; j < 5; j++)
    {
        sumOfFoodEatenByMonkey2 = sumOfFoodEatenByMonkey2 + s[1][j];
    }
    for (int j = 0; j < 5; j++)
    {
        sumOfFoodEatenByMonkey3 = sumOfFoodEatenByMonkey3 + s[2][j];
    }

    averageFoodMonkey1 = sumOfFoodEatenByMonkey1 / 5;
    averageFoodMonkey2 = sumOfFoodEatenByMonkey2 / 5;
    averageFoodMonkey3 = sumOfFoodEatenByMonkey3 / 5;

    totalAverageFoodEatenByAllMonkeys = (averageFoodMonkey1 + averageFoodMonkey2 + averageFoodMonkey3) / 3;

    cout << "\nThe average amount of food eaten per day by the whole family of monkeys is: " << totalAverageFoodEatenByAllMonkeys;
}

void LeastFood(float s[][5], int rows)
{
    float leastFood = s[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i][j] < leastFood)
            {
                leastFood = s[i][j];
            }
        }
    }

    cout << "\nThe least amount of food eaten during the week by any one monkey is:" << leastFood;
}

void GreatestFood(float s[][5], int rows)
{
    float greatestFood = s[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i][j] > greatestFood)
            {
                greatestFood = s[i][j];
            }
        }
    }

    cout << "\nThe greatest amount of food eaten during the week by any one monkey is:" << greatestFood;
}
