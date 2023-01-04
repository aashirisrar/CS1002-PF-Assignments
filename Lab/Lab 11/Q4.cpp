#include <iostream>
using namespace std;

struct CompanyDivision
{
    string divName;
    int first_Quarter_Sales;
    int second_Quarter_Sales;
    int third_Quarter_Sales;
    int fourth_Quarter_Sales;
    int total_Annual_Sales;
    int average_Quarterly_Sales;
};

void InputData(CompanyDivision &);

void Calculation(CompanyDivision &);

int main()
{
    CompanyDivision east;
    CompanyDivision west;
    CompanyDivision north;
    CompanyDivision south;

    east.divName = "East";
    west.divName = "West";
    north.divName = "North";
    south.divName = "South";

    cout << "-----Sales Figures for the East-----";
    InputData(east);
    cout << "\n-----Sales Figures for the West-----";
    InputData(west);
    cout << "\n-----Sales Figures for the North-----";
    InputData(north);
    cout << "\n-----Sales Figures for the South-----";
    InputData(south);

    cout << "\n-----Total and Average Figures for the East-----";
    Calculation(east);
    cout << "\n-----Total and Average Figures for the West-----";
    Calculation(west);
    cout << "\n-----Total and Average Figures for the North-----";
    Calculation(north);
    cout << "\n-----Total and Average Figures for the South-----";
    Calculation(south);

    return 0;
}

void InputData(CompanyDivision &sCompanyDivision)
{
    cout << "\n<-Enter the sales figures for the 4 Quarters->";

    cout << "\n\nEnter the sales figures of the first quarter:";
    cin >> sCompanyDivision.first_Quarter_Sales;

    cout << "Enter the sales figures of the second quarter:";
    cin >> sCompanyDivision.second_Quarter_Sales;

    cout << "Enter the sales figures of the third quarter:";
    cin >> sCompanyDivision.third_Quarter_Sales;

    cout << "Enter the sales figures of the fourth quarter:";
    cin >> sCompanyDivision.fourth_Quarter_Sales;

    if (sCompanyDivision.first_Quarter_Sales < 0 || sCompanyDivision.second_Quarter_Sales < 0 || sCompanyDivision.third_Quarter_Sales < 0 || sCompanyDivision.fourth_Quarter_Sales < 0)
    {
        cout << "Error! The sales figure must be positive numbers!";
        exit(0);
    }
}

void Calculation(CompanyDivision &sCompanyDivision)
{
    int totalSales = sCompanyDivision.first_Quarter_Sales + sCompanyDivision.second_Quarter_Sales + sCompanyDivision.third_Quarter_Sales + sCompanyDivision.fourth_Quarter_Sales;
    float averageSales = totalSales / 4;

    cout << "\nThe total sales are:" << totalSales << endl;
    cout << "The average sales are:" << averageSales << endl;
}