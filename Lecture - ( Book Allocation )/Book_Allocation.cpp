#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr , int n ,  int m , int maxallowedpages)
{
    int student = 1 , pages = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>maxallowedpages)
        {
            return false;
        }
        if((arr[i]+pages)<=maxallowedpages)
        {
            pages+=arr[i];
        }
        else
        {
            student++;
            pages=arr[i];
        }
    }

    return student>m ? false:true;
}

int BookAllocation(vector<int> &arr , int n ,  int m )
{
    if(m>n)
    {
        return -1;
    }
    int sum = 0 ;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        sum+=arr[i] ;
    }

    int start = 0 ;
    int end = sum ;
    int ans = 0 ;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isvalid(arr,n,m,mid))
        {
            ans = mid ;
            end = mid - 1 ;
        }
        else
        {
            start = mid + 1 ;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {2,1,3,4};
    int n = 4 , m = 2 ;
    cout << BookAllocation(arr , n , m) << endl;
}