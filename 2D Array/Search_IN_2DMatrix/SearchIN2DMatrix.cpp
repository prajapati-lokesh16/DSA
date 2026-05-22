#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> matrix,int m,int n,int target)
{
    int StRow = 0,endRow = m-1,midRow = 0;
    while(StRow <= endRow)
    {
        int mid = StRow + (endRow - StRow)/2;
        if(matrix[mid][0] <= target && target <= matrix[mid][n-1])
        {
            midRow = mid;
            break;
        }
        else if(target > matrix[mid][n-1])
        {
            StRow = mid+1;
        }
        else{
            endRow = mid -1;
        }
    }

    StRow = 0,endRow = n-1;
    while(StRow <= endRow)
    {
        int mid = StRow + (endRow - StRow)/2;
        if(matrix[midRow][mid] == target)
        {
            return true;
        }
        else if(target > matrix[midRow][mid])
        {
            StRow = mid+1;
        }
        else{
            endRow = mid -1;
        }
    }

    return false;
}



int main()
{
    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    cout<< search(matrix,3,4,60);
    return 0;
}