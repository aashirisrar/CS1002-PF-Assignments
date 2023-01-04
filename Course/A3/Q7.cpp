#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    srand(time(0));

    int tries = 1;
    int highPoint;
    int lowPoint;
    int angle;
    int hit = 0;
    float quotient;
    double pi = 3.141592;

    while (tries < 500)
    {
        lowPoint = rand() % 3;

        angle = rand() % 180 + 1;

        angle = (float)(angle * pi) / 180;

        highPoint = lowPoint + sin(angle);

        if (highPoint >= 2)
        {
            hit++;
        }

        tries++;
    }

    quotient = float(tries) / float(hit);

    cout << "The quotient of tries/hit is:" << quotient;

    return 0;
}
