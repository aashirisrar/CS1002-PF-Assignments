#include <iostream>
using namespace std;

int sizeOfArr = 5;
int numOfPasses = 0;

void SelectionSort(int s[]);
void PrintArray(int s[]);

int main()
{
    int arr[] = {45, 56, 2, 12, 13};

    SelectionSort(arr);
    PrintArray(arr);
    return 0;
}

void SelectionSort(int s[])
{
    int i, j, smallestIndex;

    for (i = 0; i < sizeOfArr - 1; i++)
    {
        smallestIndex = i;
        for (j = i + 1; j < sizeOfArr; j++)
        {
            if (s[j] < s[smallestIndex])
            {
                smallestIndex = j;
                numOfPasses++;
            }
        }

        if (smallestIndex != i)
        {
            int temp = s[smallestIndex];
            s[smallestIndex] = s[i];
            s[i] = temp;
        }
    }
}

void PrintArray(int s[])
{
    int i;
    cout << "Sorted array is:" << endl;
    for (i = 0; i < sizeOfArr; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << "The number of passes required to sort the array:" << numOfPasses;
}