#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> q;

    // Inserting elements
    q.push_back(1);
    q.emplace_front(3);
    q.push_back(2);
    q.emplace_front(5);

    // Removing elements
    q.pop_back();
    q.pop_front();

    // Traversing
    for(int i : q)
    {
        cout << i << endl;
    }

    return 0;
}