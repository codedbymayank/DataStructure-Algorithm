#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_majority_ele(vector<int> v)
{
    //Brute-Force Approach
    // sort(v.begin(),v.end());
    // int i = 0;
    // int count = 0 ;
    // while(i < v.size())
    // if(v[i] == v[i+1])
    // {
    //     count++;
    //     i++;
    // }
    // else
    // {
    //     if(v[i] == v[i-1])
    //     {
    //         count++;
    //          if(count > (v.size()/2))
    //         {
    //             return v[i] ;
    //         }
    //     }
       
    //     else
    //     {
    //         count = 0 ;
    //         i--;
    //     }
    // }

    
    //Using Moore's Voting Algorithm
    int maj_count = 0 ;
    int ans = 0 ;
    for(int i = 0; i < v.size() ; i++)
    {
        if(maj_count == 0)
        {
            ans = v[i];
        }
        if(ans == v[i])
        {
            maj_count++;
        }
        else
        {
            maj_count--;
        }
    }

    return ans ;

}

int main()
{
    vector<int> vec = {1 , 2 , 2 , 1 , 1} ;
    int result = find_majority_ele(vec);
    cout << result << endl;
}