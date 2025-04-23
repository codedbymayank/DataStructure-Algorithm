#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Two_Sum(vector<int> v , int target)
{
    vector<int> res ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        for(int j = i+1 ; j < v.size() ; j++)
        {
            if(target== (v[i]+v[j]))
            {
                res.push_back(v[i]);
                res.push_back(v[j]);
                break;
            }
        }
    }

    return res;
}

vector<int> two_sum(vector<int> v , int target)
{
    sort(v.begin(),v.end());
    vector<int> result ;
    int start = 0 ;
    int end = v.size() - 1 ;
    while(start<end)
    {
        if(target == (v[start]+v[end]))
        {
            result.push_back(v[start]);
            result.push_back(v[end]);
            break;
        }
        else if(v[end]>target)
        {
            end--;
        }
        else
        {
            start++;    
        }
    }

    return result;
}

int main()
{
    vector<int> v = {5,2,11,7,15} ;

    //For BruteForce Apporach
    // vector<int> result = Two_Sum(v,9);
    // cout << "First Number of Pair is : " << result[0] << endl;
    // cout << "Second Number of Pair is : " << result[1] << endl;

    //Better Approach
    vector<int> res = two_sum(v,9);
    cout << "First Number of Pair is : " << res[0] << endl;
    cout << "Second Number of Pair is : " << res[1] << endl;
}