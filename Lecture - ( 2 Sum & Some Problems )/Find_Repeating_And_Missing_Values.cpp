#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main()
{
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}} ;
    vector<int> result ;
    vector<int> temp ;
    unordered_set<int> s ;
    int ans = 0 ;
    for(int i = 0 ; i < grid.size() ; i++)
    {
        for(int j = 0 ; j < grid.size() ; j++)
        {
            
            if(s.find(grid[i][j])!=s.end())
            {
                ans = grid[i][j] ;
                break;
            }
            s.insert(grid[i][j]) ;
        }
    }
    
    result.push_back(ans) ;

    for(int i = 0 ; i < grid.size() ; i++)
    {
        for(int j = 0 ; j < grid.size() ; j++)
        {
            temp.push_back(grid[i][j]) ;
            
        }
    }

   int start = 0 ;
   sort(temp.begin(),temp.end()) ;
   while(start<temp.size()-1)
   {    
        int num = temp[start];
        int num2 = temp[start+1] ;
        if((num+1)!=num2)
        {
            result.push_back((temp[start]+1)) ;
            break;
        }
        start++;
   }
   
   for(auto value : result)
   {
    cout << value << " " ;
   }
   
   
}