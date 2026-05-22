#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> matrix)
{
    int sRow = 0,eRow = matrix.size()-1;
    int sCol = 0,eCol = matrix[0].size()-1;
    vector<int> ans;
    
    while(sRow <= eRow && sCol <= eCol)
    {

        for(int i = sCol;i <= eCol;i++)
        {
            ans.push_back(matrix[sRow][i]);
        }
        
        
        for(int i = sRow+1;i <= eRow;i++)
        {
            ans.push_back(matrix[i][eCol]);
        }
        
        
        for(int i = eCol-1;i >=sCol;i--)
        {
            if(sRow == eRow)
            {
                break;
            }
        ans.push_back(matrix[eRow][i]);
    }
    
    
    for(int i = eRow-1;i > sRow;i--)
    {
        if(sCol == eCol)
        {
            break;
        }
        ans.push_back(matrix[i][sCol]);
    }
    sRow++,eRow--,sCol++,eCol--;
}
return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<int> result = spiralMatrix(matrix);

    for(int val: result)
    {
        cout << val << " ";
    }
}