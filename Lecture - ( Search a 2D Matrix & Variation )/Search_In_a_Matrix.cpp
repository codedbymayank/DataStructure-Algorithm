#include<iostream>
#include<vector>
using namespace std;

//BruteForce Approach
bool Search_In_Matrix(vector<vector<int>> v , int element)
{
    int rowsize = v.size() ;
    int colsize = v[0].size() ;
    for(int i = 0 ; i < rowsize ; i++)
    {
        for(int j = 0 ;  j < colsize ; j++)
        {
            if(v[i][j] == element)
            {
                return true ;
            }
        }
    }

    return false;
}
int main()
{
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}} ;
    bool result = Search_In_Matrix(v , 5) ;
    if(result)
    {
        cout << "Its Found" << endl;
    }
    else
    {
        cout << "Its Not Found" << endl;

    }
}