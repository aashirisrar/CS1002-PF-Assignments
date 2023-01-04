#include <iostream>
using namespace std;

int search(char paragraph[], char substring[], int lenOfPara, int lenOfSubstring);

int lenOfArr(char s[]);

int main()
{
    char paragraph[300];
    char substring[150];

    cout << "Enter a paragraph:";
    cin.getline(paragraph, 300);

    cout << "Enter the substring to find in paragraph:";
    cin.getline(substring, 150);

    int lenOfPara = lenOfArr(paragraph);
    int lenOfSubstring = lenOfArr(substring);

    int numOfCount = search(paragraph, substring, lenOfPara, lenOfSubstring);

    cout << "The number of times the substring occurs is:" << numOfCount;

    return 0;
}

int lenOfArr(char s[])
{
    int n = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }

    return n;
}

int search(char paragraph[], char substring[], int lenOfPara, int lenOfSubstring)
{
    int countOfSubstring = 0;

    for (int i = 0; i <= lenOfPara - lenOfSubstring; i++)
    {
        int j;

        for (j = 0; j < lenOfSubstring; j++)
        {
            if (paragraph[i + j] != substring[j])
            {
                break;
            }
        }

        if (j == lenOfSubstring)
        {
            countOfSubstring++;
        }
    }

    return countOfSubstring;
}
