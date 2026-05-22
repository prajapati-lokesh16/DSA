# Binary Exponentiation
* In binary exponentiation,we loop the binary form of the power.

<pre>
    power = n = Binary form -> loop until n > 0.
    x = Base number
    
</pre>

* To handle negative power
<pre>
 n = -n;
 x = 1/x;
 Eg. (3)<sup>-5</sup>
     => (1/3)<sup>5</sup>
</pre>
* Number of binary bits for any number
 <pre>
 for number n,
 binary bits = log<sub>2</sub>n + 1

 Eg. n = 8
 binary bits = log<sub>2</sub>8 + 1
             = 3 + 1
             = 4
 Therefore, there are 4 bits in binary of 8 i.e 1000
 </pre>

* Pseudo Code :-
```c++
    binaryForm = n;
    if(n < 0)
        binaryForm = -binaryForm;
        x = 1/x;
    while(binaryForm > 0)
        if (binaryForm % 2 == 1)
            ans *= x;
        x *= x;
        binaryForm /= 2;
    return ans;
```

* Code :-
 ```c++
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
```
* Time Complexity:- O(logn)

## Applications :-
1. Cryptography :- cryptosystems like RSA rely heavily on calculating a<sup>n</sup>(mod m) where a,n,m are massive numbers.

2. Calculating Large Fibonacci numbers :- The n<sup>th</sup> fibonacci numbers can be computed efficiently using Matrix exponentiation.

3. Solving Linear Recurrence Relations :- Solve using matrix binary exponentiation like fibonacci numbers


# Stock Buy & Sell
### Conditions:
1. Buy the stock choosing a single day.
2. Sell the stock by choosing a day in future.
3. Return the profit otherwise return 0.

### Pseudo Code :-
```c++
    maxProfit = 0
    bestBuy = price[0] // first element as best buy

    // loop the array from 1 as we can't sell on first day
    for( i = 1 to n-1)
        if(price[i] > bestBuy)
            maxProfit = max(maxProfit,price[i]- bestBuy);
        
        bestBuy = min(bestBuy, price[i]);
    
    return maxProfit;
```

### Code :-
```c++
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
```

* Time Complexity:- O(n)

## Applications :-
1. Pricing strategy optimization:- Bussiness might use the logic to determine best window to set a discount(buy low) and when to set premium price(sell high).

2. Optimal Timing Problems :- used in Inventory Management and Resource Scheduling.