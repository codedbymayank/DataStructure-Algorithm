#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(vector<int> vec , int targetsum)
{
    //Brute-Force Approach

    vector<int> res;
    // for(int i = 0 ; i < vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j < vec.size() ; j++)
    //     {
    //         if(targetsum == (vec[i] + vec[j]))
    //         {
    //             res.push_back(vec[i]);
    //             res.push_back(vec[j]);
    //             break;

    //         }
    //     }
    // }

    
    //Optimised Approach
    int i = 0 ;
    int j = vec.size() - 1 ;
    while(i<j)
    {
        if(vec[i]+vec[j] == targetsum)
        {
            res.push_back(vec[i]);
            res.push_back(vec[j]);
            break;

        }
        else if(vec[i]+vec[j]<targetsum)
        {
            i++;
           
        }
        else
        {
            j--;
        }
    }
    return res ;
}

int main()
{
    vector<int>  vec = {2,7,11,15};
    int targetsum = 9 ;
    vector<int> result = PairSum(vec , targetsum);
    for(int value : result)
    {
        cout << value << " " ;
    }
}