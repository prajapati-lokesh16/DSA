#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    
    q.push(5);
    q.push(10);
    q.emplace(3);

    while(!q.empty())
    {
        cout << "Top of queue : " << q.top() << endl;
        q.pop();
    }
    
    q.push(4);
    q.push(5);

    priority_queue<int> q2;
    q2.swap(q);

    cout << "size of q : " << q.size() << endl;
    cout << "size of q2 : " << q2.size() << endl;

    priority_queue< int, vector<int> , greater<int> > q3;
    q3.push(50);
    q3.push(34);
    q3.push(26);
    q3.push(89);

    while(!q3.empty())
    {
        cout << "Top of queue : " << q3.top() << endl;
        q3.pop();
    }
    
    return 0;
}