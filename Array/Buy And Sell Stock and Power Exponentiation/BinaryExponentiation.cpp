#include <iostream>
using namespace std;

double Power(double x,int n)
{
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n % 2 == 0) return 1.0;
    if(x == -1 && n % 2 != 0) return -1.0;
    long binForm = n;
    if(n < 0)
    {
        binForm = -binForm;
        x = 1/x;
    }
    double ans = 1.0;
    while(binForm > 0)
    {
        if(binForm % 2 == 1)
        {
            ans *=  x;
        }
        x = x*x;
        binForm /= 2;
    }
    return ans;
}
int main()
{
    cout << Power(12,3);
}