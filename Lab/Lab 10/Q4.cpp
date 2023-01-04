#include <iostream>
using namespace std;

int sizeOfArr;

void SearchElement(int s[]);

void InsertElement(int s[]);

void DeleteElement(int s[]);

void PrintArray(int s[]);

int main()
{
    int arr[100];
    int choice;

    cout << "Enter the size of the array:";
    cin >> sizeOfArr;

    cout << "Enter the elements in the array:";

    for (int i = 0; i < sizeOfArr; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter what you want to perform: Press " << endl;
    cout << "1-For Searching an element in array\n2-For Inserting an element in array\n3-For Deleting an element in array:";
    cin >> choice;

    if (choice == 1)
    {
        SearchElement(arr);
    }
    else if (choice == 2)
    {
        InsertElement(arr);
    }
    else if (choice == 3)
    {
        DeleteElement(arr);
    }
    else
    {
        cout << "Error! Invalid Input!";
    }

    return 0;
}

void SearchElement(int s[])
{
    int num;
    int ind;
    bool isFound = false;

    cout << "Enter the element to find in the array:";
    cin >> num;

    for (int i = 0; i < sizeOfArr; i++)
    {
        if (s[i] == num)
        {
            ind = i;
            isFound = true;
        }
    }

    if (isFound)
    {
        cout << "The element is found at the index: " << ind;
    }
    else
    {
        cout << "The element was not found in the array!";
    }
}

void InsertElement(int s[])
{
    int num;

    cout << "Enter the element to insert in the array:";
    cin >> num;

    s[sizeOfArr] = num;

    // Sorting array
    for (int i = 0; i < sizeOfArr + 1; i++)
    {
        for (int j = i + 1; j < sizeOfArr + 1; j++)
        {
            if (s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (int i = 0; i < sizeOfArr + 1; i++)
    {
        cout << s[i] << " ";
    }
}

void DeleteElement(int s[])
{
    int indexToBeDel;

    cout << "Enter the index of the element to be deleted:";
    cin >> indexToBeDel;

    if (indexToBeDel < sizeOfArr)
    {
        for (int i = indexToBeDel; i < sizeOfArr; i++)
        {
            for (int j = indexToBeDel + 1; j < sizeOfArr; j++)
            {
                int temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }

        cout << "The array after deleting the element is:" << endl;

        for (int i = 0; i < sizeOfArr - 1; i++)
        {
            cout << s[i] << " ";
        }
    }
    else
    {
        cout << "Deletion is not possible in the array.";
    }
}
