# Pair Sum
* There is given a sorted Array and a Target Sum

* We have to return a pair of two numbers whose sum is equal to target sum

* <pre>
    eg. [2,7,11,15],     target sum = 9
    elements => 2,7
</pre>

* PseudoCode for Pair Sum 
```c++
i = 0,j = n-1;
while i < j
    if Pairsum > target
        j--;
    else if Pairsum < target
        i++;
    else Pairsum == target
        return ans;
```
### Time Complexity :-
* 1. BruteForce Approach :- O(n<sup>2</sup>)
* 2. PairSum two Pointer approach :- O(n)


## Real Life Applications of
* E-commerce and inventory Management :- 
    * Determining if two items in an inventory can be bundled together to meet a promotional price goal
    * Or if a customer's fixed budget can be exactly met by purchasing two specific products
* Cryptographic Hashing:
    * Finding pairs crucial for collisions checking by satisfying certain conditions or for finding weaknesses.



# Majority Element
* An element that occurs more than floor [n/2] times in the array.
* Majority element can be only one in an array as it occupies more than half the array.
<pre>
eg.
    1. arr = [1,2,3,1,1,2,1,1]
    if n = 8.
    then n/2 = 4.
    element should occur more than 4 times.

    2. arr = [1,2,3,1,1,2,1,1,2]
    if n=9.
    then floor n/2 = floor 4.5 = 4
    element should occur more than 4 times.
</pre>

## Methods for finding Majority Element:-

### 1. BruteForce Approach :- 
* compares each element using two loops.
* Time Complexity :- O(n<sup>2</sup>)
* Pseudo code :-
```c++
    for(i = 0 to n-1)
        int freq = 0;
        for(j = 0 to n-1)
            if( nums[i] == nums[j])
                freq++;
        
        if( freq > n/2)
            return i;
    
    return -1;
```
* Code :-
 ```c++
 int majorityElement(vector<int> nums)
{
    int n = nums.size();
   for(int val:nums)
   {
    int freq = 0;
    for(int el: nums)
    {
        if(el == val)
        {
            freq++;
        }
    }
    if(freq > n/2)
    {
        return val;
    }
   }
    return -1;
}
```
### 2. Optimized Brute force:- 
* sorts and then calculates freqeuncy using one loop
* Time Complexity :- O(nlogn).

* Pseudo code :-
```c++
    first sort the array nums
    int freq = 1, ans = nums[0];
    for(i = 1 to n-1)
        if(nums[i] == nums[i-1])
            freq++;
        else
            freq = 1;
            ans = nums[i];
        
        if(freq > n/2)
            return ans;
    
    return -1;
```

* Code :-
```c++
int majorityElement(vector<int> nums)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int freq = 1,ans = nums[0];

   for(int i = 1; i < n;i++)
   {
    if(nums[i] == nums[i-1])
    {
        freq++;
    }
    else{
        freq = 1;
        ans = nums[i];
    }

    if(freq > n/2)
    {
        return ans;
    }
   }
    return -1;
}
```
### 3. Moore's Voting Algorithm
* It increments the freq if the element matches otherwise decrements it.
* Time Complexity :- O(n)
* Pseudo Code :-
```c++
 int freq = 0, ans = 0;
 for(i = 0 to n-1)
    if(freq == 0)
        ans = nums[i]
    if(ans == nums[i])
        freq++;
    else
        freq--;
 return ans;
 ```

 * Code :-
 ```c++
 int Moores(vector<int> nums)
{
    int n = nums.size();
    int freq = 0,ans = 0;
    for(int i = 0;i < n;i++)
    {
        if(freq == 0)
        {
            ans = nums[i];
        }
        if(ans == nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    //If majority element does not exists then add this check
    int count = 0;
    for(int val: nums)
    {
        if(val == ans)
        {
            count++;
        }
    }
    if(count < n/2)
        return  -1; 
    return ans;
}
```
## Real Life Applications of Majority Element and Moore's Algorithm
* Voting systems and Elections:- To determine winning candidate who receives more than half of the total votes
* Data stream Analysis & Anamoly Detection :- Can efficiently track the most frequent item or trend. Also help in detecting anamolies