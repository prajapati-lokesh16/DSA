#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT_MIN;
    for(int st = 0; st < 5;st++)
    {
        int currSum = 0;
        for(int end = st;end < 5;end++)
        {
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout << maxSum;
}