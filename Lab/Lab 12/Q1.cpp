#include <iostream>
using namespace std;

void InputData(int data[], int &ind, int &sizeOfArr, int &n);
int sumOfN(int data[], int &ind, int &sizeOfArr, int &n);

int main()
{
    int data[50];
    int sizeOfArr;
    int ind;
    int n;

    InputData(data, ind, sizeOfArr, n);

    int totSum = sumOfN(data, ind, sizeOfArr, n);

    cout << "The sum is:" << totSum;

    return 0;
}

void InputData(int data[], int &ind, int &sizeOfArr, int &n)
{
    cout << "Enter the size of the array:";
    cin >> sizeOfArr;

    cout << "Enter the elements of the array:";

    for (int i = 0; i < sizeOfArr; i++)
    {
        cin >> data[i];
    }

    cout << "Enter the index to start the sum:";
    cin >> ind;

    cout << "Enter the value for N:";
    cin >> n;
}

int sumOfN(int data[], int &ind, int &sizeOfArr, int &n)
{
    int sum = 0;

    for (int i = ind; i < sizeOfArr; i++)
    {
        sum = sum + data[i];
    }

    return sum;
}