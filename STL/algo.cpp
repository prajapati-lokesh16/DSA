#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



bool customComparator(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //if second value of p1 and p2 is equal
    if(p1.first < p2.first) return true;
    else return false;
}

int main()
{
    int arr[5] = {34,23,12,45,38};
    sort(arr,arr+5);

    for(int i = 0;i < 5;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    vector<int> vec = {34,23,12,45,38};
    sort(vec.begin(),vec.end(),greater<int>());

    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;


    vector<pair<int,int>> p = {{34,23},{12,45},{38,89},{27,14},{15,14}};
    sort(p.begin(),p.end(),customComparator);

    for(auto i : p)
    {
        cout << i.first << " " << i.second <<endl;
    }



    //Reversing
    reverse(vec.begin() + 1,vec.end());
    cout << "reversed vector from index 1 : ";
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;


    // Next and previous permutation
    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout << "Next Permutation : " << s << endl;
    prev_permutation(s.begin(),s.end());
    cout << "Previous Permutation : " << s << endl;
    
    // Max, Min, Swap
    int a = 4, b = 7;
    cout << "Max of a and b : " << max(a,b) << endl;
    cout << "Min of a and b : " << min(a,b) << endl;
    swap(a,b);
    cout << "Swapped a and b : " << a << ", " << b << endl;
    
    // MIn and Max in vector
    cout << "Min : " << *min_element(vec.begin(),vec.end()) << endl;
    cout << "Max : " << *max_element(vec.begin(),vec.end()) << endl;
    
    // Binary Search
    cout <<"Binary Search : " << binary_search(vec.begin(),vec.end(),12) << endl;

    
    return 0;
}