#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	int disarr[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "enter the term " << i + 1 << " in the array:";
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				arr[i] = arr[j];
			}
		}
	}

	int k=0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				continue;
			}
			else
			{
				disarr[k] = arr[i];
			}
			k++;
		}
	}


	cout << "distinct element in sorted (increasing order) are:"<<endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "the term " << i + 1 << " in the distinct array:" <<disarr[i]<<endl;
	}

	system("pause");

	return 0;
}