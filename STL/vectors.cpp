#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create vector
    vector<int> vectorArray;
    
    // Inserting elements at back of vector
    vectorArray.push_back(1);
    vectorArray.push_back(2);
    vectorArray.push_back(3);

    vectorArray.emplace_back(4);
    vectorArray.emplace_back(5);

    // Removing or pop  the elements
    vectorArray.pop_back();

    // Accessing elements at an specific index
    cout << "Value at index 1 : " << vectorArray[1] << endl;
    cout << "Value at index 2 : " << vectorArray[2] << endl;

    // Accessing first and last element
    cout << "Front : " << vectorArray.front() << endl;
    cout << "Back : " << vectorArray.back() << endl;

    //  Size function --> returns No. of elements in vector

    cout << "Total number of elements : " << vectorArray.size() << endl;

    // Capacity --> Total size of the vector
    cout << "Total size of the vector : " << vectorArray.capacity() << endl;

    
    
    
    
    
    // Ways of initialising vectors
    
    vector<int> vector1 = {1,2,3,4,5,6};
    
    vector<int> vector2(3,10); // Creating vector of size 3 and each element is 10
    
    vector<int> vector3 (vector1); // initializing one vector with another
    
    // Erase
    vectorArray.erase(vectorArray.begin());
    vector1.erase(vector1.begin() + 1,vector1.begin() + 3);
    
    // Insert
    vectorArray.insert(vectorArray.begin(),100);


    // Clear
    vectorArray.clear();

    for(int i : vector1)
    {
        cout <<"Element in vector 1 : "<< i << endl;
    }

    // Empty
    cout << "is empty : " << vectorArray.empty();


    

    // Traversing the vector
    for(int i : vectorArray)
    {
        cout <<"Element : "<< i << endl;
    }
    return 0;
}


