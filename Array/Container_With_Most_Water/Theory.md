# Container With Most Water 
## Brute Force Approach
* Height :- Will be minimum of left and right boundary as minimum boundary will control (avoid overflow) it.
    ```
    Height = min(left boundary ,right boundary)
    ```

* Width :- It will be equal to right minus left boundary.
    ```
    Width = Right Boundary - Left Boundary
    ```

### Pseudo Code :-
```c++
    maxWater = 0;
    for(i = 0 to n-1)
        for(j = i+1 to n-1)
            width = j-i;
            ht = min(height[i],height[j]);
            area = width * ht;
            maxWater = max(maxWater,area)

    return maxWater;
```
### Code :- 
```c++
int maxArea(vector<int> height)
{
    int maxWater = 0;
    for(int i = 0; i < height.size();i++)
    {
        for(int j = i+1;j < height.size();j++)
        {
            int width = j-i;
            int ht = min(height[i],height[j]);
            int area = width * ht;
            maxWater = max(maxWater,area);
        }
    }
    return maxWater;
}
```

### Time Complexity :- O(n<sup>2</sup>)

Note :- To submit an algorithm mximum 10<sup>8</sup> operations are allowed.

## Two Pointer Approach
* Height :- Will be minimum of left and right boundary as minimum boundary will control (avoid overflow) it.
    ```
    Height = min(left boundary ,right boundary)
    ```

* Width :- It will be equal to right minus left boundary.
    ```
    Width = Right Boundary - Left Boundary
    ```

* Pointer to update :- As height is controlled by minimum height.Therefore,
    ```
    min(height[leftptr],height[rightptr])
    ```

### Pseudo Code :-
```c++
    maxWater = 0;
    lptr = 0;
    rptr = n-1;
    while(lptr < rptr)
        width = rptr - lptr;
        ht = min(height[lptr],height[rptr]);
        area = width * ht;
        maxWater = max(maxWater,area);
        height[left] < height[right] ? left++ : right--;

    return maxWater;
        
```

### Code :-
```c++
#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> height)
{
    int maxWater = 0;
    int left = 0,right = height.size()-1;
    while(left < right)
    {
            int width = right - left;
            int ht = min(height[left],height[right]);
            int area = width * ht;
            maxWater = max(maxWater,area);

            height[left] < height[right] ? left++ : right--;
        
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);
}
```
### Time Complexity :- O(n)