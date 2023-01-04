#include <iostream>
using namespace std;

int main()
{
    float costOfRent;
    int numOfRooms, numOfDays;
    float saleTax, saleTaxPer;
    float disPer, totalCost, discount, finalCost;
    const float dis10 = 0.1;
    const float dis15 = 0.15;
    const float dis20 = 0.2;
    const float dis25 = 0.25;
    const float dis30 = 0.3;
    const float dis35 = 0.35;
    float finalBill;

    cout << "Enter the cost of rent of one room:";
    cin >> costOfRent;

    cout << "Enter the number of rooms booked:";
    cin >> numOfRooms;

    cout << "Enter the number of days for which the rooms are booked:";
    cin >> numOfDays;

    cout << "Enter the sales tax percent:";
    cin >> saleTaxPer;

    totalCost = numOfRooms * costOfRent;

    if (numOfDays > 0 && numOfRooms > 0)
    {

        if (numOfRooms <= 10)
        {
            // discount 10%

            if (numOfDays > 3)
            {
                // additional discount
                // discount = (totalCost / 100) * 15;
                discount = totalCost * dis15;
                finalCost = totalCost - discount;
            }
            else
            {
                // no additional discount
                // discount = (totalCost / 100) * 10;
                discount = totalCost * dis10;
                finalCost = totalCost - discount;
            }

            saleTax = totalCost * (saleTaxPer / 100);
            finalBill = finalCost - saleTax;
        }
        else if (numOfRooms <= 20)
        {
            // discount 20%

            if (numOfDays > 3)
            {
                // additional discount
                discount = totalCost * dis25;
                finalCost = totalCost - discount;
            }
            else
            {
                // no additional discount
                discount = totalCost * dis20;
                finalCost = totalCost - discount;
            }

            saleTax = totalCost * (saleTaxPer / 100);
            finalBill = finalCost - saleTax;
        }
        else if (numOfRooms <= 30)
        {
            // discount 30%

            if (numOfDays > 3)
            {
                // additional discount
                discount = totalCost * dis35;
                finalCost = totalCost - discount;
            }
            else
            {
                // no additional discount
                discount = totalCost * dis30;
                finalCost = totalCost - discount;
            }

            saleTax = totalCost * (saleTaxPer / 100);
            finalBill = finalCost - saleTax;
        }

        cout << "\nBILL:" << endl;
        cout << "The cost of renting one room is:$" << costOfRent << endl;
        cout << "The discount on each room is:$" << discount / numOfRooms << endl;
        cout << "The number of rooms booked are:" << numOfRooms << endl
             << endl;
        cout << "The total cost is:$" << totalCost << endl;
        cout << "The total discount is:$" << discount << endl;
        cout << "The sales tax is:$" << saleTax << endl;
        cout << "The total billing amount is:" << totalCost << "-" << discount << "-" << saleTax << "= $" << finalBill << endl;
    }

    else
    {
        cout << "Error!";
    }
}
