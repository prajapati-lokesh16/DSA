# Iterators
1. begin() iterator
  * points to the start of the vector
  * on dereferencing (*) returns the start value of vector

    ```c++
    cout<< *vec.begin();
    ```

2. end() iterator
    * points to the next value to the last of the vector;
    * Does not point to vector's last element;
    * On dereferencing basically returns 0 or any random value;

    ```c++
    cout<< *vec.end();
    ```

3. Creating iterator
    ```c++
    vector<int> :: iterator it;
    for(it = vec.begin();it != vec.end();it++)
    {
        cout << "Element is : " << *(it) << endl;
    }
    ```

4. Reverse iterator
    * rbegin() -> points to last element of vector.
    * rend() -> points to start element of vector.
    * used to print the vector in reverse.

    ```c++
    vector<int> :: reverse_iterator itr;
    for(itr = vec.rbegin();itr != vec.rend();itr++)
    {
        cout << "Element is : " << *(itr) << endl;
    }
    ```

5. Auto keyword
    * used to automatically identify the type of the iterator

    ```c++
    for(auto it = vec.begin();it != vec.end();it++)
    {
        cout << "Element is : " << *(it) << endl;
    }
    ```