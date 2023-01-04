#include <iostream>
using namespace std;

int sizeOfArr = 5;

void EvenOddInsertionSort(int s[]);
void PrintArray(int s[]);

int main()
{
    int arr[] = {14, 9, 3, 7, 5};

    EvenOddInsertionSort(arr);
    PrintArray(arr);

    return 0;
}

void EvenOddInsertionSort(int s[])
{
    for (int i = 2; i < sizeOfArr; i++)
    {
        int j = i - 2;
        int temp = s[i];

        // check for odd positioned elements
        if ((i + 1) & 1 == 1)
        {
            while (temp >= s[j] && j >= 0)
            {
                s[j + 2] = s[j];
                j -= 2;
            }
            s[j + 2] = temp;
        }

        // sorting the even positioned elements
        else
        {
            while (temp <= s[j] && j >= 0)
            {
                s[j + 2] = s[j];
                j -= 2;
            }
            s[j + 2] = temp;
        }
    }
}

void PrintArray(int s[])
{
    cout << "Output: ";
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}