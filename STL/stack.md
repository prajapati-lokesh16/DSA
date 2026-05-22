# Stack
1. Creating a stack
    ```c++
    stack<int> s;
    ```

2. Inserting in stack
    ```c++
    s.push(1);
    s.push(2);
    s.emplace(3);
    ```

3. Top, Empty and Pop
    * top() -> returns top of the stack
    * empty() -> returns true if empty else false
    * pop() -> removes the top of the stack

    ```c++
    while(!s.empty())
    {
        cout << "Top of stack : " << s.top() << endl;
        s.pop();
    }
    ```

4. Size and Swap
    * size() -> returns the size of the stack;
    * swap() -> swaps the elements of one stack with another stack;

    ```c++
    stack<int> s2;
    s2.swap(s);

    cout << "size of s : " << s.size() << endl;
    cout << "size of s2 : " << s2.size() << endl;
    return 0;
    ```


## Note : Time complexity
1. push, emplace, pop,top -> O(1)