#include <iostream>
using namespace std;

struct MonthlyBudget
{
    float housing;
    float utilities;
    float householdExpenses;
    float transportation;
    float food;
    float medical;
    float insurance;
    float entertainment;
    float clothing;
    float miscellaneous;
};

void InputExpenditure(MonthlyBudget &sMonthlyBudget);

void Report(MonthlyBudget &sMonthlyBudget);

int main()
{
    MonthlyBudget sMontlyBudget;

    InputExpenditure(sMontlyBudget);

    Report(sMontlyBudget);

    return 0;
}

void InputExpenditure(MonthlyBudget &sMonthlyBudget)
{
    cout << "<-Enter the amounts spent in each budget category in month->" << endl;

    cout << "\nEnter the amount spent on housing:";
    cin >> sMonthlyBudget.housing;

    cout << "Enter the amount spent on utilities:";
    cin >> sMonthlyBudget.utilities;

    cout << "Enter the amount spent on household expenses:";
    cin >> sMonthlyBudget.householdExpenses;

    cout << "Enter the amount spent on transportation:";
    cin >> sMonthlyBudget.transportation;

    cout << "Enter the amount spent on food:";
    cin >> sMonthlyBudget.food;

    cout << "Enter the amount spent on medical:";
    cin >> sMonthlyBudget.medical;

    cout << "Enter the amount spent on insurance:";
    cin >> sMonthlyBudget.insurance;

    cout << "Enter the amount spent on entertainment:";
    cin >> sMonthlyBudget.entertainment;

    cout << "Enter the amount spent on clothing:";
    cin >> sMonthlyBudget.clothing;

    cout << "Enter the amount spent on miscellaneous:";
    cin >> sMonthlyBudget.miscellaneous;
}

void Report(MonthlyBudget &sMonthlyBudget)
{
    float amountForHousing = 500 - sMonthlyBudget.housing;
    float amountForUtilities = 150 - sMonthlyBudget.utilities;
    float amountForHouseholdExpenses = 65 - sMonthlyBudget.householdExpenses;
    float amountForTransportation = 50 - sMonthlyBudget.transportation;
    float amountForFood = 250 - sMonthlyBudget.food;
    float amountForMedical = 30 - sMonthlyBudget.medical;
    float amountForInsurance = 100 - sMonthlyBudget.insurance;
    float amountForEntertainment = 150 - sMonthlyBudget.entertainment;
    float amountForClothing = 75 - sMonthlyBudget.clothing;
    float amountForMiscellaneous = 50 - sMonthlyBudget.miscellaneous;

    cout << "\nThe amount over or under for housing is:" << amountForHousing << endl;
    cout << "The amount over or under for utilities is:" << amountForUtilities << endl;
    cout << "The amount over or under for household expenses is:" << amountForHouseholdExpenses << endl;
    cout << "The amount over or under for transportation is:" << amountForTransportation << endl;
    cout << "The amount over or under for food is:" << amountForFood << endl;
    cout << "The amount over or under for medical is:" << amountForMedical << endl;
    cout << "The amount over or under for insurance is:" << amountForInsurance << endl;
    cout << "The amount over or under for entertainment is:" << amountForEntertainment << endl;
    cout << "The amount over or under for clothing is:" << amountForClothing << endl;
    cout << "The amount over or under for miscellaneous is:" << amountForMiscellaneous << endl;

    float totalAmountOfBudget = 500 + 150 + 65 + 50 + 250 + 30 + 100 + 150 + 75 + 50;
    float expenditure = sMonthlyBudget.housing + sMonthlyBudget.utilities + sMonthlyBudget.householdExpenses + sMonthlyBudget.transportation +
                        sMonthlyBudget.food + sMonthlyBudget.medical + sMonthlyBudget.insurance + sMonthlyBudget.entertainment + sMonthlyBudget.clothing + sMonthlyBudget.miscellaneous;

    float amountForEntireMonthlyBudget = totalAmountOfBudget - expenditure;

    cout << "\nThe amount over or under for the entire monthly budget is:" << amountForEntireMonthlyBudget;
}
