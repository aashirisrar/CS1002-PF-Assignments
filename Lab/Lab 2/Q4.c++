#include <iostream>
using namespace std;

int main() {
    int num, sum, prod, dig1, dig2, dig3, dig4, dig5, dig6;
    
    cout<<"Enter a number:";
    cin>>num;
    
    if(num>=100000 && num<=999999)
    {
        dig1 = num%10;
        num=num/10;
        dig2 = num%10;
        num=num/10;
        dig3 = num%10;
        num=num/10;
        dig4 = num%10;
        num=num/10;
        dig5 = num%10;
        num=num/10;
        dig6 = num%10;
        num=num/10;
        
        sum = dig1+dig2+dig3+dig4+dig5+dig6;
        cout<<"SUM:"<<sum<<endl;
        
        prod = dig1*dig2*dig3*dig4*dig5*dig6;
        cout<<"PRODUCT:"<<prod;
    }
    else if(num<100000)
    {
        cout<<"NOT A SIX DIGIT NUMBER: TOO SMALL";
    }
    else if(num>999999)
    {
        cout<<"NOT A SIX DIGIT NUMBER: TOO LARGE";
    }
    else
    {
        cout<<"Invalid Input:  Enter a number!";
    }
    
}