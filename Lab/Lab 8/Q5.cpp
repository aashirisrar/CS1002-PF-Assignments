#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	int aver;
	int count = 0;
	int min = 1;
	int max = 0;

	cout << "Enter the numbers:";
	cin >> n;

	while (n > 0)
	{
		count++;

		sum = sum + n;

		if (n > max)
		{
			max = n;
		}

		if (n < min)
		{
			min = n;
		}


		cout << "Enter the numbers:";
		cin >> n;
	}


	aver = sum / count;

	cout << "Sum = " << sum<<endl;
	cout << "Average = " << aver << endl;
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;


	system("pause");
}