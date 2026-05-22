#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(3);

    while(!s.empty())
    {
        cout << "Top of stack : " << s.top() << endl;
        s.pop();
    }

    s.push(5);
    s.push(6);
    s.push(7);

    stack<int> s2;
    s2.swap(s);

    cout << "size of s : " << s.size() << endl;
    cout << "size of s2 : " << s2.size() << endl;
    return 0;
}