#include <iostream>
using namespace std;

int main()
{
    int n;
    int chainCountOfCurrentNum = 0;
    int largestChainCountNumber = 0;
    int chainCountOfPrevNumber = 0;

    cout << "Input= ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        chainCountOfCurrentNum = 0;
        for (int j = i; j > 1;)
        {
            if (j % 2 == 0)
            {
                j = j / 2;
                chainCountOfCurrentNum++;
            }
            else
            {
                j = 3 * j + 1;
                chainCountOfCurrentNum++;
            }
        }

        if (chainCountOfCurrentNum > chainCountOfPrevNumber)
        {
            largestChainCountNumber = i;
            chainCountOfPrevNumber = chainCountOfCurrentNum;
        }
    }

    cout << "Output= " << largestChainCountNumber << endl;
    cout << "Number of steps:" << chainCountOfPrevNumber;

    return 0;
}
