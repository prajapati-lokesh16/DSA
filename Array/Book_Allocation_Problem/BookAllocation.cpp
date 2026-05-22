#include<iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> pages,int n,int m,int mid)
{
    int student = 1,page = 0;
    for(int i = 0;i < n; i++)
    {
        if(pages[i] > mid) 
            return false;
        if(page + pages[i] <= mid)
            page += pages[i];
        else{
            student++;
            page = pages[i];
        }
    }
    if(student > m)
        return false;
    else   
        return true;
}

int allocateBooks(vector<int> &pages, int n,int m)
{
    if(n < m)   return -1;
    int st = 0,end = 0,ans = INT_MAX;
    for(int i = 0;i < n;i++)
    {
        end += pages[i];
    }
    while(st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(pages,n,m,mid))
        {
            end = mid-1;
            ans = min(ans,mid);
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> pages = {2,1,3,4};
    cout << allocateBooks(pages,4,2);
    return 0;
}