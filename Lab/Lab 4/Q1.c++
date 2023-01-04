#include <iostream>
using namespace std;

int main()
{
    char alp;

    cout << "Enter a character:";
    cin >> alp;

    if (alp >= 'a' && alp <= 'z' || alp >= 'A' && alp <= 'Z')
    {
        if (alp == 'a' || alp == 'A')
        {
            cout << "It is a vowel";
        }
        else if (alp == 'e' || alp == 'E')
        {
            cout << "It is a vowel";
        }
        else if (alp == 'i' || alp == 'I')
        {
            cout << "It is a vowel";
        }
        else if (alp == 'o' || alp == 'O')
        {
            cout << "It is a vowel";
        }
        else if (alp == 'u' || alp == 'U')
        {
            cout << "It is a vowel";
        }
        else
        {
            cout << "It is a consonant";
        }
    }

    return 0;
}