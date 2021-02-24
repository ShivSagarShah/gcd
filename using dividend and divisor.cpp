#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int dividend = max(n1,n2);
    int divisor = min(n1,n2);
    while (dividend%divisor!=0)
    {
        int remainder = dividend%divisor;
        dividend = divisor;
        divisor = remainder;

    }
    cout<<divisor;
    

}
