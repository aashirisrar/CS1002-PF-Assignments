#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char fileName[50];
    char data[50];

    cout << "Enter the name of the file:";
    cin >> fileName;

    file.open(fileName);

    cin.ignore();

    cout << "Enter what you want to insert:";
    cin.getline(data, 50);

    file << data;

    file.close();

    return 0;
}