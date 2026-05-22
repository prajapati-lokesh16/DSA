# Queue
1. Creating a queue
    ```c++
    queue<int> s;
    ```

2. Inserting in queue
    ```c++
    q.push(1);
    q.push(2);
    q.emplace(3);
    ```

3. Front, Empty and Pop
    * front() -> returns the front of the queue
    * empty() -> returns true if empty else false
    * pop() -> removes the front of the queue

    ```c++
    while(!q.empty())
    {
        cout << "Front of queue : " << q.front() << endl;
        q.pop();
    }
    ```


4. Size and Swap
    * size() -> returns the size of the queue;
    * swap() -> swaps the elements of one queue with another queue;

    ```c++
    queue<int> q2;
    q2.swap(q);

    cout << "size of q : " << q.size() << endl;
    cout << "size of q2 : " << q2.size() << endl;
    ```


## Note : Time complexity
1. push, emplace, pop,front -> O(1)