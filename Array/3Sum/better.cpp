#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr)
{
    int n = arr.size();
    set<vector<int>> triplet;

    for(int i = 0;i < n;i++)
    {
        int tar = -arr[i];
        set<int> s;
        for(int j = i+1;j < n;j++)
        {
                int third = tar - arr[j];
                if(s.find(third) != s.end())
                {
                    vector<int> trip = {arr[i], arr[j], third};
                    sort(trip.begin(),trip.end());
                    triplet.insert(trip);
                }
                s.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(triplet.begin(),triplet.end());
    return ans;
}

int main()
{
    vector<int> arr = {-1,0,1,2,-1,4};
    vector<vector<int>> trip = threeSum(arr);

    for(vector<int> val:trip)
    {
        for(int el: val)
        {
            cout << el << " ";
        }
        cout << endl;
    }
}