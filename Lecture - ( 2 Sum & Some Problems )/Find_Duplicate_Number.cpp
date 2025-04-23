#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int find_dup(vector<int> v)
{
    unordered_set<int> s ;
    int rangenum = v.size() - 1 ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(s.find(v[i])!=s.end())
        {
            return v[i] ;
        }
        else
        {
            s.insert(v[i]);
        }
    }

    return -1;
}
int main()
{
    vector<int>v = {1,3,4,2,2} ;
    int res = find_dup(v);
    cout << res << endl;
    
}