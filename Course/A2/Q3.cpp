#include <iostream>
using namespace std;

int main()
{
    int quant = 1000;
    float priceOfStock = 45.50;
    float totalCostBuy, totalCostSell;
    float brokerComBuy, brokerComSell;
    float profit;

    totalCostBuy = priceOfStock * quant;

    brokerComBuy = (totalCostBuy / 100) * 2;

    cout << "Joe purchased the stock for: $" << totalCostBuy << endl;
    cout << "Joe paid his broker when purchasing the stock: $" << brokerComBuy << endl
         << endl;

    priceOfStock = 56.90;

    totalCostSell = priceOfStock * quant;

    brokerComSell = (totalCostSell / 100) * 2;

    cout << "The Joe sold the stock for: $" << totalCostSell << endl;
    cout << "Joe paid his broker when selling the stock: $" << brokerComSell << endl
         << endl;

    profit = totalCostSell - totalCostBuy - brokerComBuy - brokerComSell;

    if (profit > 0)
    {
        cout << "Joe made a profit of: $" << profit << endl;
    }
    else
    {
        cout << "Joe lost money on transaction: $" << profit;
    }
}
