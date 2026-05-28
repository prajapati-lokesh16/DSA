// A = [30,11,15,14,12] , h = 5;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> array,int n,int h,int minK)
{
    int hours = 0,lastPile = array[0];
    int i = 0;
    for(int i = 0;i < n;i++)
    {
        hours += (array[i] + minK - 1) / minK;
    }

    return hours <= h;
}

int minBanana(vector<int>& piles,int h)
{
    int ans = -1,n = piles.size();
    int end = 0;
    if(n > h) return -1;
    for(int i : piles)
    {
        end = max(end,i);
    }
    int st = 1;
    while(st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(piles,n,h,mid))
        {
            ans = mid;
            end = mid-1;
            
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}



int main()
{
    vector<int> piles = {30,11,15,14,12}; // Ans = 30
    vector<int> piles2 = {6,7,11,13,17,19,23}; // Ans = -1
    vector<int> piles3 = {2,3,5,7,11,1000000000}; // Ans = 166666667
    int h = 5;
    int h2 = 11;
    cout<< minBanana(piles,h)<< endl;
    cout<< minBanana(piles2,h)<< endl;
    cout<< minBanana(piles3,h2)<< endl;
    return 0;
}