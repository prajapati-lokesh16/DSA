# List
   * It is a container with doubly linked list.
   * Operations can be performed on both sides.
   * Random access not possible

1. Creating list
    ```c++
    list <int> lst;
    ```

2. Inserting elements
    * Inserting at start 
        ```c++
        lst.push_front(3);
        lst.emplace_front(5);
        ```
    * Inserting at end
        ```c++
        lst.push_back(1);
        lst.emplace_back(2);
        ```

3. Removing elements
    * removing from back
        ```c++
        lst.pop_back();
        ```
    * removing from front
        ```c++
        lst.pop_front();
        ```


## Note : All the functions used for vectors are also available for list