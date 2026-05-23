#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(4);

    cout << "Lower bound : " << *s.lower_bound(4) << endl;
    cout << "Upper bound : " << *s.upper_bound(4) << endl;
    for(int i : s)
    {
        cout << i << " ";
    }

    cout << endl;
}