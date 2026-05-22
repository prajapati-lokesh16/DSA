# Single Element in Sorted Array
1. Find a single element in an array containing duplicate elements except one.

### Pseudo code :-
```c++
    int n = A.size();

    if(n == 1)  return A[0];

    int st = 0, end = n-1;
    while(st <= end)
        int mid = st + (end - st)/2;

        if(mid == 0 && A[mid] != A[1])  return A[mid];

        if(mid == n-1 && A[mid] != A[n-2])  return A[mid];

        if(A[mid] != A[mid-1] && A[mid] != A[mid+1])     return A[mid];
        
        if(mid % 2 == 0)
            if(A[mid] == A[mid-1])
                end = mid-1;
            else
                st = mid+1;
        else
            if(A[mid] == A[mid-1])
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

int singleElement(vector<int> A)
{
    int n = A.size();

    if(n == 1)  return A[0];

    int st = 0, end = n-1;
    while(st <= end)
    {
        int mid = st + (end - st)/2;

        if(mid == 0 && A[mid] != A[1])  return A[mid];

        if(mid == n-1 && A[mid] != A[n-2])  return A[mid];

        if(A[mid] != A[mid-1] && A[mid] != A[mid+1])     return A[mid];
        
        if(mid % 2 == 0)
        {
            if(A[mid] == A[mid-1])
            {
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(A[mid] == A[mid-1])
            {
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> A = {1,1,2,3,3,4,4,5,5};
    cout << singleElement(A);
}
```

### Time Complexity :- O(log n)