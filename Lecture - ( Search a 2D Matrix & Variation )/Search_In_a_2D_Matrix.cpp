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

//Optimal Approach
bool SearchElement(int row , int start , int end , vector<vector<int>> matrix , int target)
{
    int s = start ;
    int e = end ;
    while(s<=e)
    {
        int mid = s+ (e-s)/2 ;
        if(target == matrix[row][mid])
        {
            return true ;
        }
        else if(target>matrix[row][mid])
        {
            s = mid + 1 ;
        }
        else
        {
            e = mid - 1 ;
        }
    }

    return false;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rowsize = matrix.size() ;
    int colsize = matrix[0].size() ;
    for(int i = 0 ; i < rowsize ; i++)
    {
        if(target==matrix[i][0] || target==matrix[i][colsize-1])
        {
            return true ;
        }
        else if(target>matrix[i][0] && target<matrix[i][colsize-1])
        {
            int row = i ;
            int start = 0 ;
            int end = colsize - 1 ;
            bool result = SearchElement(row , start , end , matrix , target);
            if(result)
            {
                return true ;
            }
            else
            {
                break ;
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

    //For Optimal Apporach
    bool res = searchMatrix(v,5);
    if(res)
    {
        cout << "Its Found" << endl;
    }
    else
    {
        cout << "Its Not Found" << endl;

    }
}