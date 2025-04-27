#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0 ;
    for(int  i = 0  ; i < nums.size() ; i++)
    {
        ans = ans ^ nums[i] ;
    }

    return ans;
}

int main()
{
    vector<int> vec{3,1,3,4,1};
    int ans = singleNumber(vec);
}