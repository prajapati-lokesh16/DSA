#include <iostream>
#include <map>
using namespace std;


int main()
{
    multimap<string,int> m;
    m.emplace("tv",50);
    m.emplace("laptop",100);
    m.emplace("laptop",100);
    m.emplace("laptop",100);

    m.insert({"camera" , 26});
    m.emplace("tv",50);
    m.emplace("tv",50);
    m.emplace("tv",50);

    // Erase
    m.erase("tv");
    m.erase(m.find("laptop"));

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