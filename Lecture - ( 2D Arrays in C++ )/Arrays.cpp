#include<iostream>
#include<vector>
using namespace std;

bool Linear_Search_2_D_Array(int arr[4][3] , int element) 
{
    bool result = false ;

    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
           if(arr[i][j] == element)
           {
                return true ;
           }
        }

       
    }
    return result;
}

pair<int,int> Linear_Search_2_D_Array_Pair(int arr[3][3] , int element) 
{
    pair<int,int> p ;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
           if(arr[i][j] == element)
           {
                p.first = i ;
                p.second = j ;
                return p;
           }
        }

       
    }
    return p;
}

int Maximum_Row_Sum(int arr[3][3])
{
    int sum = 0 ;
    int tempsum = 0 ;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            tempsum = tempsum + arr[i][j] ;
        }

        sum = max(sum,tempsum);
        tempsum = 0 ;
    }

    return sum ;
}

int Diagonal_Sum(int arr[4][4])
{
    int rows = 4 ;
    int col = 4 ;
    int d1 = 0 ;
    int d2 = 0 ;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            if(i==j)
            {
                d1+= arr[i][j] ;
            }
        }
    }

    for(int i = rows-1 ; i >=0 ; i--)
    {
        for(int j = col - 1 ; j >=0 ; j--)
        {
            if(i==j)
            {
                d2+= arr[i][j] ;
            }
        }
    }

    return (d1+d2) ;
}

int main()
{
    //2D Array Store Elements
    //2D Array elements are store in a linear way , but inside it there are two specific methods 
    /*
        1. Row Major :- In this element are store row wise , means first it will store element of first row in a linear way then from next index it will store element of next row and so on .
        2. Column Major :- Same as above , but according to column wise 
     */


    //Just Created 2D Array and intializing it
    int newarr[3][3]  = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3 ;
    int col = 3 ;

    //Accessing elements
    cout << newarr[2][3] << endl;

    //For inputs through loop
    // for(int i = 0 ; i < rows ; i++)
    // {
    //     for(int j = 0 ; j < col ; j++)
    //     {
    //         cin >> newarr[i][j] ;
    //     }

    //     cout << endl;
    // }

    //Through loops
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            cout << newarr[i][j] << " " ;
        }

        cout << endl;
    }

    //Linear Search in 2D Array
    bool result = Linear_Search_2_D_Array(newarr , 6);
    if(result)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    //For returning Pair
    pair<int,int> pair_Result = Linear_Search_2_D_Array_Pair(newarr , 6);
    cout << "Row Index is " << pair_Result.first << endl;
    cout << "Col Index is " << pair_Result.second << endl;

    //Maximum Row Sum
    int sum_result = Maximum_Row_Sum(newarr);
    cout << "Maximum row sum is : " << sum_result << endl;

    //Diagonal Sum 
    int diag_newarr[4][4]  = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int diagonal_Sum_result = Diagonal_Sum(diag_newarr);
    cout << "Diagonal Sum of both diagonal : " << diagonal_Sum_result << endl;
    
    //2D Vector
    vector<vector<int>> v ;
    
}