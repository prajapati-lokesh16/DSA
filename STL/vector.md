# Standard Template Library (STL)
## Vectors
1. Creating vector
```c++
vector<int> vectorArray;
```
2. Ways to Initialize Vectors
   * Initilize directly 
     ```c++
     vector<int> vector1 = {1,2,3,4,5,6};
     ```

   * Initilize vector with one initial value
     ```c++
     vector<int> vector2(3,10);
     ```

   * Initilize vector with another vector
     ```c++
     vector<int> vector3 (vector1);
     ```
    
3. Inserting elements at back of vector

    ```c++
    vectorArray.push_back(1);
    vectorArray.push_back(2);
    vectorArray.push_back(3);

    vectorArray.emplace_back(4);
    vectorArray.emplace_back(5);

    ```

4. Removing or pop  the elements
    ```c++
    vectorArray.pop_back();
    ```

5. Accessing elements at an specific index
    ```c++
    cout << "Value at index 1 : " << vectorArray[1] << endl;
    cout << "Value at index 2 : " << vectorArray[2] << endl;
    ```

6. Accessing first and last element
    ```c++
    cout << "Front : " << vectorArray.front() << endl;
    cout << "Back : " << vectorArray.back() << endl;
    ```

7. Size function 
    * Returns No. of elements in vector

    ```c++
    cout << "Total number of elements : " << vectorArray.size() << endl;
    ```

8. Capacity
    * Total size of the vector

    ```c++
    cout << "Total size of the vector : " << vectorArray.capacity() << endl;
    ```

9. Traversing the vector

    ```c++
    for(int i : vectorArray)
    {
        cout <<"Element "<< i-1 << " : "<< i << endl;
    }
    ```


## Note : Time complexity of all of the above functions 
 * Time Complexity = O(1)


 10. Erase
       * Remove an element
       * Changes only size not capacity

         ```c++
         vectorArray.erase(vectorArray.begin());
         ```
        * Remove elements in a range
            * Start index is included
            * Ending index is excluded
           ```c++
           vector1.erase(vector1.begin() + 1, vector1.begin() + 3);
           ```

11. Insert 
    * Inserts element at an given index

        ```c++
        vectorArray.insert(vectorArray.begin(),100);
        ```

12. Clear
    * Clears the vector
    * Changes only size not capacity

      ```c++
      vectorArray.clear();
      ```

13. Empty
    * Returns boolean whether vector is empty or not

      ```c++
      cout << "is empty : " << vectorArray.empty     ();
      ```


## Note : erase and insert function are costly.
* Time complexity : O(n)