# Peak Index in Mountain Array
1. Peak Element :- A specific element at an index i in an array where, 
    * elements at indexes 0 to i-1 are in increasing order and 

    * elements at indexes i+1 to n-1 are in decreasing order is called a peak element.

    * Peak element is greater than all the elements.

    * <pre>
        eg. Array = [0,3,8,9,5,2]
        Peak element = 9 at p = 3
        Array[p] > Array[i+1]
        Array[p] > Array[i-1]
        On left of the peak:-
            Array[i] < Array[i+1];
        On right of the peak:-
            Array[i] > Array[i+1];
    </pre>
    * Array[0] != Array[n-1] != peak;

### Pseudo code :-
```c++
    int st = 1;
    int end = nums.size()-2;
    while(st <= end)
        int mid = st + (end - st)/2;
        if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
            return mid;
        else if(nums[mid] > nums[mid-1])
            st = mid+1;
        else
            end = mid-1;
    return -1;
```

### Code :-
```c++
#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> nums)
{
    int st = 1;
    int end = nums.size()-2;
    while(st <= end)
    {
        int mid = st + (end - st)/2;
        if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
        {
            return mid;
        }
        else if(nums[mid] > nums[mid-1])
        {
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {0,3,8,9,5,2};
    cout << peak(nums);
}
```

### Time Complexity :- O(log n)