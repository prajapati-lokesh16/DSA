#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

set<vector<int>> threeSum(vector<int> arr)
{
    int n = arr.size();
    set<vector<int>> triplet;

    for(int i = 0;i < n;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            for(int k = j+1;k < n;k++)
            {
                if(arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> trip = {arr[i], arr[j], arr[k]};
                    sort(trip.begin(),trip.end());
                    if(triplet.find(trip) == triplet.end())
                    {
                        triplet.insert(trip);
                    }
                }
            }
        }
    }

    return triplet;
}

int main()
{
    vector<int> arr = {-1,0,1,2,-1,4};
    set<vector<int>> trip = threeSum(arr);

    for(vector<int> val:trip)
    {
        for(int el: val)
        {
            cout << el << " ";
        }
        cout << endl;
    }
}