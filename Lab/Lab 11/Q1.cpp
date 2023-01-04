#include <iostream>
using namespace std;

void Upper(char s[], int sizeOfArr);

int lenOfArr(char s[]);

int main()
{
    char arr[50];

    cout << "Enter a string:";
    cin.getline(arr, 50);

    int sizeOfArray = lenOfArr(arr);

    Upper(arr, sizeOfArray);

    return 0;
}

int lenOfArr(char s[])
{
    int n;

    for (int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }

    return n;
}

void Upper(char s[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }

    // Print array
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << s[i];
    }
}