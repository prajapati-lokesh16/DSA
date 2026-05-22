#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    while(!q.empty())
    {
        cout << "Front of queue : " << q.front() << endl;
        q.pop();
    }
    
    q.push(4);
    q.push(5);

    queue<int> q2;
    q2.swap(q);

    cout << "size of q : " << q.size() << endl;
    cout << "size of q2 : " << q2.size() << endl;
    
    return 0;
}