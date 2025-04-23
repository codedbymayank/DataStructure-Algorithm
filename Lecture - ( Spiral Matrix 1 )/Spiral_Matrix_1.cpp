#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
int m = matrix.size() , n = matrix[0].size() ;    
int srow = 0 , scol = 0 , erow = m - 1 , ecol = n - 1 ;
while(srow<=erow && scol<=ecol)
{
    for(int i = scol ; i <= ecol ; i++)
    {
        res.push_back(matrix[srow][i]);
    }

    
    for(int i = srow+1 ; i <= erow ; i++)
    {
        
        res.push_back(matrix[i][ecol]);
    }

    
    for(int i = ecol-1 ; i >= scol ; i--)
    {
        if(srow==erow)
        {
            break;
        }
        res.push_back(matrix[erow][i]);
    }
    for(int i = erow-1 ; i >= srow+1 ; i--)
    {
        if(scol==ecol)
        {
            break;
        }
        res.push_back(matrix[i][scol]);
    }
    
    srow++;
    erow--;
    scol++;
    ecol--;
}

return res;
}

int main()
{
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}} ;
    vector<int> result = spiralOrder(v) ;
    for(auto i : result)
    {
        cout << i << " " ;
    }

}