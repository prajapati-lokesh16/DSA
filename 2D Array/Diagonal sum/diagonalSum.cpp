#include <iostream>
#include<vector>
using namespace std;

int diagonalSum(vector<vector<int>>matrix,int n)
{
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        sum += matrix[i][i];
        if(i != n-1-i)
        {
            sum += matrix[i][n-1-i];
        }
    }
    return sum;
}


int main()
{
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<vector<int>> matrix1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << diagonalSum(matrix,4)<<endl;
    cout << diagonalSum(matrix,3);
}