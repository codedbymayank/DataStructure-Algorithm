#include<iostream>
#include<vector>
using namespace std;

bool IsValid(vector<int> v , int arr_size , int m , int max_allocation)
{
    int total_min_calc = 0 ;
    int Painters = 1 ;
    for(int i = 0 ; i < arr_size ; i++ )
    {
        if(v[i]>max_allocation)
        {
            return false ;
        }

        if((total_min_calc + v[i])<=max_allocation)
        {
          total_min_calc+=v[i];
        }
        else
        {
            Painters++;
            total_min_calc = v[i] ;
        }
    }

    return Painters<=m ? true : false;

}

int Painters_Partition(vector<int> v , int n , int m)
{
    int arr_size = v.size() ;
    int start = 0 ;
    int sum = 0 ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        sum+=v[i] ;
        
    }
    int end = sum ;
    int ans = 0 ;
    while(start<=end)
    {
        int mid = start + (end-start)/2 ;
        
        if(IsValid(v,arr_size , m,mid))
        {
            ans = mid ;
            end = mid - 1 ;
        }
        else
        {
            start = mid + 1 ;
        }
    }

    return ans ;
    
}


int main()
{
    vector<int> v = {40,30,10,20} ;
    int n = 4 ;
    int m = 2 ;

    cout << Painters_Partition(v , n , m);
}