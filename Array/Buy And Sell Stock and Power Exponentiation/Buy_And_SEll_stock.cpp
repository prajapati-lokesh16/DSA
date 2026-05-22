#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> price)
{
    int maxProfit = 0,bestBuy = price[0];
    for(int i = 1; i < price.size();i++)
    {
        if(price[i] > bestBuy)
        {
            maxProfit = max(maxProfit,price[i]-bestBuy);
        }
        bestBuy = min(bestBuy,price[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> price = {7,1,5,3,6,4};
    cout << maxProfit(price);
}