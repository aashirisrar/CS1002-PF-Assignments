#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float vol, res, cap, induc, freq, current;

    cout << "Enter the voltage:";
    cin >> vol;

    cout << "Enter the resistance:";
    cin >> res;

    cout << "Enter the capacitance:";
    cin >> cap;

    cout << "Enter the inductance:";
    cin >> induc;

    cout << "Enter the frequency:";
    cin >> freq;

    current = (vol) / sqrt((res * res) + (((2 * 3.14 * freq * induc) - (1 / (2 * 3.14 * freq * cap))) * ((2 * 3.14 * freq * induc) - (1 / (2 * 3.14 * freq * cap)))));

    cout << "The current is in the circuit is:" << current;

    return 0;
}