#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> array,int n,int c,int minAllowedDistance)
{
    int cows = 1,distance = array[0];
    for(int i = 1;i < n;i++)
    {
        if( array[i] - distance >= minAllowedDistance)
        {
            cows++;
            distance = array[i];
        }
        if(cows == c){
            return true;
        }
    }

    return false;
}

int aggresiveCows(vector<int>& array,int n,int c)
{
    if(c > n) return -1;
    sort(array.begin(),array.end());
    int ans = -1;
    int end = array[n-1] - array[0];
    int st = 1;
    while(st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(array,n,c,mid))
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
    vector<int> array = {1,2,8,4,9};
    cout<<aggresiveCows(array,5,3);
    return 0;
}