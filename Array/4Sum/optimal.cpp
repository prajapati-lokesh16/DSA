#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums,int target)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i = 0;i < n;i++)
    {
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j = i+1;j < n;)
        {
            int p = j+1,q = n-1;
            while(p < q)
            {
                int sum = nums[i]+nums[j]+nums[p]+nums[q];
                if(sum < target) p++;
                else if(sum > target) q--;
                else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++,q--;
                    while(p < q && nums[p] == nums[p-1]) p++;
                }
            }
            j++;
            while(j < n && nums[j] == nums[j-1]) j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-2,-1,-1,1,1,2,2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums,target);
    for(vector<int> el:result)
    {
        for(int val: el)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}