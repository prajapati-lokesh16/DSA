# Pair
* Used to create a pair of two values.
* The values can of of any data type.

1. Creating pair
    ```c++
    pair<string,int> p = {"lokesh",1};
    ```

2. Accessing values of pair
    ```c++
    cout<< "first value : " << p.first << endl;
    cout<< "second value : " << p.second << endl;
    ```

3. Creating pair of pairs
    ```c++
    pair<int , pair<char,int>> ans = {1,{'L',12}};
    ```

4. Accessing pair of pairs
    ```c++
    cout << "first value of ans : " << ans.first <<                endl;
    cout << "first value of pair of ans : " << ans.               second.first << endl;
    cout << "second value of pair of ans: " << ans.               second.second << endl;
    ```

5. Creating a vector of pairs
    ```c++
    vector<pair<int,int>> vec = { {1,2}, {3,4}, {5,               6} };
    ```

6. Traversing the vector
    ```c++
    for(pair<int,int> i : vec)
    {
        cout << i.first << " " << i.second << endl;
    }
    ```

    * auto can be used to automatically identify the type of vector

7. Inserting into vector

    * push_back -> assumes the input is already a object (or pair).
    * emplace_back -> creates the data as in place object (or pair) and inserts it.


      ```c++
      vec.push_back({7,8});
      vec.emplace_back(9,10);
      ```
    