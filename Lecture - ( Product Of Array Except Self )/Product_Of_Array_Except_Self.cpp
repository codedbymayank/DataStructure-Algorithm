#include<iostream>
#include<vector>
using namespace std;

vector<int> POAES(vector<int> v)
{
    vector<int> res ;
    
    //Brute-Force Approach
    // int mul = 1 ;
    // for(int i = 0 ; i < v.size() ; i++)
    // {
    //     for(int j = 0 ; j < v.size() ; j++)
    //     {
    //         if(i!=j)
    //         {
    //             mul = mul * v[j] ;
    //         }
    //     }
    //     res.push_back(mul);
    //     mul = 1 ;
    // }

    //Optimal Apporach

    vector<int> prefix;
    vector<int> suffix;
    
    for(int i = 1 ; i < v.size() ; i++)
    {
        prefix[i] = prefix[i-1] * v[i-1];
    }

    for(int i = v.size()-2 ; i >=0 ; i--)
    {
        suffix[i] = suffix[i+1] * v[i+1];
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        res[i] = prefix[i] * suffix[i];
    }

    return res ;
}

int main()
{
    vector<int> v = {1 , 2 , 3 , 4};
    vector<int> res = POAES(v);
    for(int val : res)
    {
        cout << val <<  " " ;
    }
}