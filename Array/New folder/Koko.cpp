// A = [30,11,15,14,12] , h = 5;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> array,int n,int h,int minK)
{
    int hours = 0,lastPile = array[0];
    int i = 0;
    while(i < n)
    {
        if(array[i] <= minK)
        {
            hours++;
            i++;
        }
        else if(array[i] > minK)
        {
            array[i] -= minK;
            hours++;
        }
        // if( array[i] - lastPile >= minK)
        // {
        //     hours++;
        //     lastPile = array[i];
        // }
        if(hours == h){
            return true;
        }
    }

    return false;
}

int minBanana(vector<int>& piles,int h)
{
    sort(piles.begin(),piles.end());
    int ans = -1,n = piles.size();
    int end = 0;
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
            st = mid+1;
            
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}



int main()
{
    // vector<int> piles = {30,11,15,14,12}; // Ans = 30
    vector<int> piles = {6,7,11,13,17,19,23}; // Ans = 30
    vector<int> piles2 = {2,3,5,7,11,1000000000}; // Ans = 30
    int h = 11;
    int h2 = 11;
    cout<< minBanana(piles,h)<< endl;
    cout<< minBanana(piles2,h2)<< endl;
    // cout << abs(-5);
    return 0;
}