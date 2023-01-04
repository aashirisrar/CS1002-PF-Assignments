#include <iostream>
using namespace std;

void PalindromeCheck(int n)
{
	int temp = n;
	int rev=0;

	for (int i = 0; n > 0; i++)
	{
		rev = (n % 10) + (rev * 10);
		n = n / 10;
	}
	
	if (rev == temp)
	{
		cout << "It is a palindrome";
	}
	else
	{
		cout << "It is not a palindrome";
	}

}

int main()
{
	int num;

	cout << "Enter a number:";
	cin >> num;

	PalindromeCheck(num);

	system("pause");

	return 0;
}