#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int peak_index(vector<int> v)
{
   int start = 0 ;
   int end = v.size() - 1 ;

   while(start<=end)
   {
      int mid = start + (end-start)/2 ;

      if((v[mid]>v[mid-1]) && v[mid]>v[mid+1])
      {
         return mid ;
      }

      if(v[mid]>v[mid-1])
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
  vector<int> v = {24,69,100,99,79,78,67,36,26,19} ;

  int res = peak_index(v);
  cout << res << endl;

}
    