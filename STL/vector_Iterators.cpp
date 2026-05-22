#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    cout<< *vec.begin() << endl;

    cout<< *vec.end() << endl;

    // Creating iterator 
    vector<int> :: iterator it;
    for(it = vec.begin();it != vec.end();it++)
    {
        cout << "Element is : " << *(it) << endl;
    }

    // reverse iterators
    vector<int> :: reverse_iterator itr;
    for(itr = vec.rbegin();itr != vec.rend();itr++)
    {
        cout << "Element is : " << *(itr) << endl;
    }


    return 0;
}
