# Sorting
* By default sorts in ascending order
1. For arrays
    ```c++
    int arr[5] = {34,23,12,45,38};
    sort(arr,arr+5);
    ```

2. For vectors
    ```c++
    vector<int> vec = {34,23,12,45,38};
    sort(vec.begin(),vec.end());
    ```

3. Providing functor or comparator
    ```c++
    vector<int> vec = {34,23,12,45,38};
    sort(vec.begin(),vec.end(),greater<int>());
    ```

4. Creating a custom comparator
* can create comparator logic according to the need.

    Creating comparator : 
    ```c++
    bool customComparator(pair<int,int> p1,pair<int,int> p2)
    {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //if second value of p1 and p2 is equal
    if(p1.first < p2.first) return true;
    else return false;
    }
    ```

    Using Comparator:
    ```c++
    vector<pair<int,int>> p = {{34,23},{12,45},{38,89},{27,14},{15,14}};
    sort(p.begin(),p.end(),customComparator);

    for(auto i : p)
    {
        cout << i.first << " " << i.second <<endl;
    }
    ```


# Reverse

    ```c++
    reverse(vec.begin() + 1,vec.end());
    cout << "reversed vector from index 1 : ";
    for(int i : vec)
    {
        cout << i << " ";
    }
    ```

# Next permutation and previous permutation
    ```c++
    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout << "Next Permutation : " << s << endl;
    prev_permutation(s.begin(),s.end());
    cout << "Previous Permutation : " << s << endl;
    ```