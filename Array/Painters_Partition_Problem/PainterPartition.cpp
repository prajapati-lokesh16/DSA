#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> array,int n,int m,int maxAllowedTime)
{
    int painter = 1,time = 0;
    for(int i = 0;i < n;i++)
    {
        if(array[i] > maxAllowedTime) return false;
        if(time + array[i] <= maxAllowedTime)
        {
            time += array[i];
        }
        else{
            painter++;
            time = array[i];
        }
    }

    return painter <= m;
}

int painterPartition(vector<int>& array,int n,int m)
{
    if(m > n) return -1;
    int st = INT_MIN,end = 0,ans = -1;
    for(int i = 0;i < n;i++)
    {   st = max(st,array[i]);
        end += array[i];
    }
    while(st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(array,n,m,mid))
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
    vector<int> array = {40,30,10,20};
    cout<<painterPartition(array,4,2);
    return 0;
}