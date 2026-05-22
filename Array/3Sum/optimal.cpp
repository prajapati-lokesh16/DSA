#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr)
{
    int n = arr.size();
    vector<vector<int>> ans;

    for(int i = 0;i < n;i++)
    {
        if(i > 0 && arr[i] == arr[i-1]) continue;
        int j = i+1,k = n-1;
        while(j < k)
        {
            int target = arr[i]+arr[j]+arr[k];
            if(target < 0){
                j++;
                continue;
            }
            else if(target > 0)
            {
                k--;
                continue;
            } 
            else{
                vector<int> trip = {arr[i],arr[j],arr[k]};
                ans.push_back(trip);
                j++,k--;
                while(j < k && arr[j] == arr[j-1])
                {
                    j++;
                }
            }
        }
    }
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