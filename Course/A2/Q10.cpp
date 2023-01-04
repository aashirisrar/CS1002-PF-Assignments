#include <iostream>
using namespace std;

int main()
{
    char gender;
    float bodyWeight, wristMeasure, waistMeasure, hipMeasure, foreArmMeasure;
    float a1, a2, a3, a4, a5;
    float total;
    float bodyFat, bodyFatPercent;

    cout << "Enter 'M' for male and 'F' for female:";
    cin >> gender;

    if (gender == 'M' || gender == 'm')
    {
        cout << "Enter the body weight:";
        cin >> bodyWeight;

        cout << "Enter the wrist measure:";
        cin >> wristMeasure;

        a1 = (bodyWeight * 1.082) + 94.42;
        a2 = wristMeasure * 4.15;

        total = a1 - a2;

        bodyFat = bodyWeight - total;

        bodyFatPercent = (bodyFat * 100) / bodyWeight;
    }
    else if (gender == 'F' || gender == 'f')
    {
        cout << "Enter the body weight:";
        cin >> bodyWeight;

        cout << "Enter the wrist measure at fullest point:";
        cin >> wristMeasure;

        cout << "Enter the waist measure at navel:";
        cin >> waistMeasure;

        cout << "Enter the hip measure at fullest point:";
        cin >> hipMeasure;

        cout << "Enter the fore arm measure at fullest point:";
        cin >> foreArmMeasure;

        a1 = (bodyWeight * 0.732) + 8.987;
        a2 = wristMeasure / 3.140;
        a3 = waistMeasure * 0.157;
        a4 = hipMeasure * 0.249;
        a5 = foreArmMeasure * 0.434;
        total = a1 + a2 - a3 - a4 + a5;

        bodyFat = bodyWeight - total;

        bodyFatPercent = (bodyFat * 100) / bodyWeight;
    }
    else
    {
        cout << "Invalid Input";
    }

    cout << "The body fat is:" << bodyFat << endl;
    cout << "The body fat percentage is:" << bodyFatPercent;
    return 0;
}