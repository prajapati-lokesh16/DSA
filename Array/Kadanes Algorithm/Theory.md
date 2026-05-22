# Maximum Subarray Problem
### Given Arrray : [1,2,3,4,5]
## SubArray :- 
* A continuous part of an array.
* eg. [1],[2,3,4], [2,3]

### Total Number of Subarray:
* ```n*(n+1)/2```
* Eg. 5*(5+1)/2 = 15

# Kadane's Algorithm
* It checks the sum of elements and if it negative then make it 0.

* It is a type of Dynamic programming algorithm which solves the problem by dividing it in small sub problems.

* The check condition is made after cakculating maximum Sum to handle negative elements array edge case
```c++ 
    if(currSum < 0)
        currSum = 0;
```


## Time Complexity
### Kadane's Algorithm:- O(n)
### Brute Force Approach without optimization:- O(n<sup>3</sup>)
### Brute Force Approach with optimization:- O(n<sup>2</sup>)

## Applications:-
* Game Development :- Players lose and earn points for consecutive actions like a combo strike.

* Financial Data Analytics :- To find Time window that yields maximum profit from single transaction 