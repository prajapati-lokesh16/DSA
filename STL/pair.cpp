#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<string,int> p = {"lokesh",1};

    // printing pair values
    cout<< "first value : " << p.first << endl;
    cout<< "second value : " << p.second << endl;

    // Creating pair of pairs
    pair<int , pair<char,int>> ans = {1,{'L',12}};

    // Accessing pair of pairs
    cout << "first value of ans : " << ans.first << endl;
    cout << "first value of pair of ans : " << ans.second.first << endl;
    cout << "second value of pair of ans: " << ans.second.second << endl;
    
    // vector of pairs
    vector<pair<int,int>> vec = { {1,2}, {3,4}, {5,6} };

    // Inserting into vector
    vec.push_back({7,8});
    vec.emplace_back(9,10);

    // Traversing the vector
    for(pair<int,int> i : vec)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}