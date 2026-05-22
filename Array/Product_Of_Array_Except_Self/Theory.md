# Product of Array Except Self
### Conditions :-
1. You are not allowed to use division operator(/).
2. You have to build an array ans  whose each index i will be filled with the product of array nums except the index i of nums.

## Brute Force Approach :-

* Pseudo Code :-
```c++
    vector<int> ans(n,1);
    for(i = 0 to n-1)
        for(j = 0 to n-1)
            if(i != j)
                ans[i] *= nums[j];
    return ans;
```

* Code :-
```c++
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);
    for(int i = 0;i < ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}
```

### Time Complexity :- O(n<sup>2</sup>)

## Using Prefix and Suffix Array
1. Suffix Array :- Product of the elements before i<sup>th</sup> index
    ```
    prefix[i] = prefix[i-1] * nums[i-1];
    ```

2. Suffix Array :- Product of the elements after i<sup>th</sup> index
    ```
    suffix[i] = suffix[i+1] * nums[i+1];
    ```
    
* Pseudo Code :-
```c++
    int n = nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    //Prefix array
    for(i = 1 to n-1)
        prefix[i] = prefix[i-1] * nums[i-1];

    //Suffix Array 
    for(i = n-2 to 0)
        suffix[i] = suffix[i+1] * nums[i+1];

    //Creating ans array
    for(i = 0 to n-1)
        ans[i] = prefix[i] * suffix[i];

    return ans;
```

* Code :-
```c++
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    //Prefix array
    for(int i = 1;i < n;i++)
    {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    //Suffix Array 
    for(int i = n-2;i >= 0;i--)
    {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    //Creating ans array
    for(int i = 0; i < n;i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);
    for(int i = 0;i < ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}
```
### Time Complexity :- O(n)
### Space Complexity :- O(n)

## Using Prefix and Suffix Approach Without Storing (Most Optimal)
* Pseudo Code :-
```c++
    vector<int> ans(n,1);

    //Prefix array
    for(i = 1 to n-1)
        ans[i] = ans[i-1] * nums[i-1];

    //Suffix Array 
    int suffix = 1;
    for(int i = n-2 to 0)
        suffix *= nums[i+1];
        ans[i] *= suffix;

    return ans;
```

* Code :-
```c++
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n,1);

    //Prefix array
    for(int i = 1;i < n;i++)
    {
        ans[i] = ans[i-1] * nums[i-1];
    }

    //Suffix Array 
    int suffix = 1;
    for(int i = n-2;i >= 0;i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);
    for(int i = 0;i < ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}
```
### Time Complexity :- O(n)
### Space Complexity :- O(1)

