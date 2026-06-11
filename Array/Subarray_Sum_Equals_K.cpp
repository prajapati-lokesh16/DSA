#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int subarraySum(vector<int>& nums, int k) {
        vector<int> prefixSum(nums.size(),0);
        prefixSum[0] = nums[0];
        for(int i = 1;i < nums.size();i++)
        {
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        unordered_map<int,int> m;
        int count = 0;

        for(int j = 0;j < nums.size();j++)
        {
            if(prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if(m.find(val) != m.end())
            {
                count += m[val];
            }
            if(m.find(prefixSum[j]) == m.end())
            {
                m[prefixSum[j]] = 0;
            }
            m[prefixSum[j]]++;
        }

        return count;

    }

int main()
{
    vector<int> nums = {9,4,0,20,3,10,5};
    int k = 33;
    cout << "SubArray Sum count : " << subarraySum(nums,k);
    return 0;
}