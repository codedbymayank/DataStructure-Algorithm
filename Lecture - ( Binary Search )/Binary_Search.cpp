#include<iostream>
#include<vector>
using namespace std;

int Binary_Search(vector<int> v , int value)
{
    int start = 0 ;
    int end = v.size() - 1 ;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(value == v[mid])
        {
            return mid ;
        }
        else if(value > v[mid])
        {
            start = mid + 1 ;
        }
        else
        {
            end = mid - 1 ;
        }
    }

    return -1;
}


int main()
{
    vector<int> v = {1 , 2 , 3 , 4 , 5 , 6} ;
    int index_value = Binary_Search(v , 3) ; 
    if(index_value>=0)
    {
        cout << "Element Found" << endl ;
    }   
    else
    {
        cout << "Element Not Found" << endl ;
    }
}