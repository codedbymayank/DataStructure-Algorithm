#include<iostream>
#include<vector>
using namespace std;

void printsubset(vector<int> v , vector<int> &res , int i , vector<vector<int>> &finalsubset )
{
    if(i==v.size())
    {
        finalsubset.push_back({res});
        
        return ;
    }

    res.push_back(v[i]);
    printsubset(v,res,i+1,finalsubset);
    res.pop_back() ;
    printsubset(v,res,i+1,finalsubset);

    
}

int main()
{
        vector<int> nums = {1,2,3};
        vector<vector<int>> finalsubset ;
        vector<int> ans ;
        printsubset(nums,ans,0,finalsubset);
        for(int i = 0 ; i < finalsubset.size() ; i++)
        {
            for(int j = 0 ; j < finalsubset[0].size() ; j++)
            {
                cout << finalsubset[i][j] << " " ;
            }
        }
        cout << endl;
       
}