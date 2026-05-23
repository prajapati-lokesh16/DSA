# Multimap
* Same as map but can store multiple same values
* cannot use square notation for insert,modify and access like map.

1. Creating a map

    ```c++
    multimap<string,int> m;
    ```

2. Traversing the map

    ```c++
    for(auto p: m)
        {
            cout << p.first << " : " << p.second << endl;
        }
    ```

3. Inserting using insert or emplace

    ```c++
    m.insert({"camera" , 26});
    m.emplace("phone",45);
    ```

4. Count Function
    * Count returns the count of key i.e whether how much time it appears in multimap.

        ```c++
        cout <<"count : " << m.count("laptop") << endl;
        ```
5. Erase function
    * Deleting all multiple keys
        ```c++
        m.erase("tv");
        ```
    * Deleting only one instance of a key
        ```c++
        m.erase(m.find("laptop"));
        ```

6. Find function
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

7. Size and Empty
    * works same as studied in previous containers.

## Note : 
* By default the data in multimap is sorted in ascending order.
* sorting done on key not on value