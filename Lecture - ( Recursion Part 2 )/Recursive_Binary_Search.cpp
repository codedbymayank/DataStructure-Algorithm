#include<iostream>
#include<vector>
using namespace std;
int RecursiveBinarySearch(vector<int> v , int target , int start , int end)
{
    if(start<=end)
    {
        int mid = start + (end-start)/2;
        if(v[mid] == target)
        {
            return mid ;
        }
        else if(v[mid]<=target)
        {
            return RecursiveBinarySearch(v,target,mid+1,end)  ;
        }
        else
        {
            return RecursiveBinarySearch(v,target,start,mid-1) ;
        }
      
    }

    return -1;

    

}
int main()
{
    vector<int> v = {-1,0,3,5,9,12} ;
    int res = RecursiveBinarySearch(v,13 , 0 , v.size()-1);
    cout << res << endl;
}