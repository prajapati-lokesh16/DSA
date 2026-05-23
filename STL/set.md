# Set
* stores unique values.
* if duplicate values are inserted then it ignores them
* Implemented using self balancing tree
* Stores values in sorted order i.e ascending order.

1. Header
```c++
```

2. Creating set
```c++
```
3. Lower bound
* Returns the input value or value greater than it.
* if the input value exists in set then returns it.
* if not then returns value greater then it.
* And if input value and values greater than it does not exists then returns s.end()

    ```c++
    cout << "Lower bound : " << *s.lower_bound(4) << endl;
    ```

4. Upper bound
* Returns the value greater than input value.
* if not then returns value greater then it.
* if values greater than input value does not exists then returns s.end()
    ```c++
    cout << "Upper bound : " << *s.upper_bound(4) <<endl;
    ```


### All the functions are implemented same as implemented in map like insert,erase,size,empty etc.



## Time complexity
1. insert,count,erase => O(logN)



# Multi Set
1. Concept is same as Multi map

# Unordered Set
1. Concept is same as unordered_map
2. Concept of lower_bound and upper_bound does not exist as data is unsorted.