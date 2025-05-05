#include<iostream>
#include<vector>
using namespace std;



int search_rotated_sorted_array(vector<int> vec , int value)
{
    int start = 0 ;
    int end = vec.size() - 1 ;

    while(start <= end)
    {
        int mid = start + (end-start)/2 ;

        if(value == vec[mid])
        {
            return mid ;
        }
        else if(vec[start]<=vec[mid])
        {
            if(vec[start]<=value && value<=vec[mid])
            {
                end = mid - 1 ;
            }
            else
            {
                start = mid + 1 ;
            }
        }
        else if(vec[start]>=vec[mid])
        {
            if(vec[mid]<=value && value<=vec[end])
            {
                start = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
        }
    }

    return -1;
}


int main()
{
    vector<int> vec = {4,5,6,7,0,1,2};

    int res = search_rotated_sorted_array(vec,0) ;
    if(res>=0)
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;

    }
}