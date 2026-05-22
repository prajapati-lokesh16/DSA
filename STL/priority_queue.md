# Priority Queue
* Priority queue is implemented internally using maxheap and minheap i.e CBT (Complete Binary Tree)
* By default the largest element has the highest priority.


1. Creating a priority queue
    * header to include,
        ```c++
        #include <queue>
        ```
    * Default 
      ```c++
      priority_queue<int> q;
      ```

    * By setting priority,
        ```c++
        priority_queue< int, vector<int> , greater<int> > q3;
        ```


2. Inserting in queue
    ```c++
    q.push(5);
    q.push(10);
    q.emplace(3);

    ```

3. Front, Empty and Pop
    * top() -> returns the top of the priority queue
    * empty() -> returns true if empty else false
    * pop() -> removes the top of the priority queue

    ```c++
    while(!q.empty())
    {
        cout << "Top of queue : " << q.top() << endl;
        q.pop();
    }
    ```


4. Size and Swap
    * size() -> returns the size of the priority queue;
    * swap() -> swaps the elements of one priority queue with another priority queue;

    ```c++
    priority_queue<int> q2;
    q2.swap(q);

    cout << "size of q : " << q.size() << endl;
    cout << "size of q2 : " << q2.size() << endl;
    ```


## Note : Time complexity
1. push, emplace, pop -> O(log N) , due to tree.
2. top -> O(1)
