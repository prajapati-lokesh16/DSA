#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;

    // Inserting elements
    lst.push_back(1);
    lst.emplace_front(3);
    lst.push_back(2);
    lst.emplace_front(5);

    // Removing elements
    lst.pop_back();
    lst.pop_front();

    // Traversing
    for(int i : lst)
    {
        cout << i << endl;
    }

    return 0;
}