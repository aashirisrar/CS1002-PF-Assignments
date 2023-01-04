#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float soundPressure;
    float refSound = 20 * pow(10, -6);
    float soundLevel;
    char unit;

    cout << "Enter d for decibels and p for pascals:";
    cin >> unit;

    // check for unit
    if (unit == 'd' || unit == 'D')
    {
        cout << "Enter the sound pressure in decibels:";
        cin >> soundPressure;
        soundLevel = soundPressure;
    }
    else if (unit == 'P' || unit == 'p')
    {
        // calculate sound pressure if unit is pascals
        cout << "Enter the sound pressure in pascals:";
        cin >> soundPressure;

        soundLevel = 20 * log(10) * (soundPressure / refSound);

        cout << "The sound level is:" << soundLevel << endl;
    }
    else
    {
        cout << "Invalid!";
    }

    // Check for range
    if (soundLevel >= 130)
    {
        cout << "Threshold of pain";
    }
    else if (soundLevel >= 120 && soundLevel < 130)
    {
        cout << "Possible hearing damage";
    }
    else if (soundLevel >= 100 && soundLevel < 120)
    {
        cout << "Jack hammer at 1 m";
    }
    else if (soundLevel >= 90 && soundLevel < 100)
    {
        cout << "Traffic on a busy roadway at 10 m";
    }
    else if (soundLevel >= 60 && soundLevel < 90)
    {
        cout << "Normal conversation";
    }
    else if (soundLevel >= 30 && soundLevel < 60)
    {
        cout << "Calm library";
    }
    else if (soundLevel >= 0 && soundLevel < 30)
    {
        cout << "Light leaf rustling";
    }
    else
    {
        cout << "Error!";
    }

    return 0;
}