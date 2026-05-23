# Map
* Used to store key value pairs
* Key => Unique value in the map
* value => value of a key
1. Header to include
    ```c++
    #include <unordered_map>
    ```

2. Creating a map

    ```c++
    unordered_map<string,int> m;
    ```

3. Every functions used in map is used in same way on unordered_map including square notation.

## Note : 
* Data can be printed in any order.

## Time complexity
1. insert,erase,count -> O(1)
* Implemented using hashing.