#include<iostream>
using namespace std;

void PrimeBetNums(int n1, int n2)
{
	bool isPrime = true;

	for (int i = n1+1; i < n2; i++)
	{
		
		for (int j = 2; j < n2; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
			else
			{
				cout << i << endl;
				break;
			}
		}
	}
}

int main()
{
	int num1, num2;

	cout << "Enter the starting point:";
	cin >> num1;

	cout << "Enter the ending point:";
	cin >> num2;

	PrimeBetNums(num1, num2);

	system("pause");
}