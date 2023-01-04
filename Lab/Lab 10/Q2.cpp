#include <iostream>
using namespace std;

int sizeOfArr = 10;
int numOfPasses = 0;

void InsertionSort(int s[]);

void PrintArray(int s[]);

int main()
{
    int arr[10] = {12, 4, 3, 1, 15, 45, 33, 21, 10, 2};

    InsertionSort(arr);

    PrintArray(arr);

    return 0;
}

void InsertionSort(int s[])
{
    int currentNum;

    for (int i = 1; i < sizeOfArr; i++)
    {
        int currentNum = s[i];
        int j = i - 1;

        while (j >= 0 && s[j] > currentNum)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = currentNum;
    }
}

void PrintArray(int s[])
{
    cout << "Sorted list is:" << endl;

    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << s[i] << " ";
    }
}