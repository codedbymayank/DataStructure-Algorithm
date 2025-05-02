#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {

    //Brute-Force Approach
    // int max_val = 0 ;
    // for(int i = 0 ; i < height.size() ; i++)
    // {
       
    //     for(int j = i + 1 ; j < height.size() ; j++)
    //     {
    //        int heightvalue = min(height[i],height[j]);
    //         int somevalue = heightvalue * (j-i) ;
    //         max_val = max(max_val , somevalue);
    //     }
    // }

    // return max_val;

    //Optimal Approach

    int lp = 0 ;
        int rp = height.size() - 1 ;
        int ans = 0 ;
        while(lp<rp)
        {
            int width = rp - lp ;
            int height_val = min(height[lp] , height[rp]) ;
            int currentwater = width * height_val ;
            ans = max(ans , currentwater);
            if(height[lp]<height[rp])
            {
                lp++;

            }
            else
            {
                rp--;
            }

        }
        return ans;
}

int main()
{
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    int res = maxArea(vec);
}