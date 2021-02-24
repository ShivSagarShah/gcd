#include <iostream>
using namespace std;
int main()
{
    int n1, n2, gcd;
    cin >> n1 >> n2;
    int size = min(n1, n2);
    for (int i = 1; i < size; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}
