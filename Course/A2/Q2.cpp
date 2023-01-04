#include <iostream>
using namespace std;

int main()
{
    int age;
    string name, city, col, prof, aniType, petName;

    cout << "Enter the name:";
    cin >> name;
    cout << "Enter the age:";
    cin >> age;
    cout << "Enter the city:";
    cin >> city;
    cout << "Enter the college:";
    cin >> col;
    cout << "Enter the profession:";
    cin >> prof;
    cout << "Enter the animal type:";
    cin >> aniType;
    cout << "Enter the pet name:";
    cin >> petName;

    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << col << ". " << name << " graduated and went to work as a " << prof << ".Then, " << name << " adopted a(n) " << aniType << " named " << petName << ". They both lived happily ever after!";

    return 0;
}
