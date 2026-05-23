#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
    unordered_map<string,int> m;
    m["tv"] = 50;
    m["laptop"] = 100;
    m["headphones"] = 74;
    m["tablet"] = 120;
    m["watch"] = 56;

    m.insert({"camera" , 26});
    m.emplace("phone",45);

    // Erase
    m.erase("tv");

    for(auto p: m)
    {
        cout << p.first << " : " << p.second << endl;
    }

    // Count
    cout <<"count : " << m.count("laptop") << endl;

    // Find
    if(m.find("camera") != m.end())
    {
        cout << "camera exists" << endl;
    }
    else{
        cout<< "camera does not exist" << endl;
    }
    

    return 0;
}