# Map
* Used to store key value pairs
* Key => Unique value in the map
* value => value of a key

1. Creating a map

    ```c++
    map<string,int> m;
    ```

2. To insert and change value in map

    ```c++
    m["tv"] = 50;
    m["laptop"] = 100;
    m["headphones"] = 74;
    ```

3. Traversing the map

    ```c++
    for(auto p: m)
        {
            cout << p.first << " : " << p.second << endl;
        }
    ```

4. Inserting using insert or emplace

    ```c++
    m.insert({"camera" , 26});
    m.emplace("phone",45);
    ```

5. Count Function
    * Every key in map is unique.
    * So Every key can have a count of 0 or 1.
    * Count returns the count of key i.e whether how much time it appears in map.
    * Used to check whether a key exists in map or not.

        ```c++
        cout <<"count : " << m.count("laptop") << endl;
        ```
6. Erase function
    ```c++
    m.erase("tv");
    ```

7. Find function
    * Used to check whether a value exists or not in map
    * if found returns its iterator
    * if not found returns m.end() i.e the value next to the last key value pair of map.

        ```c++
        if(m.find("camera") != m.end())
        {
        cout << "camera exists" << endl;
        }
        else{
        cout<< "camera does not exist" << endl;
        }
        ```

8. Size and Empty
    * works same as studied in previous containers.

## Note : 
* By default the data in map is sorted in ascending order.
* sorting done on key not on value

## Time complexity
1. insert,erase,count -> O(logN)
* Implemented using self balancing tree.