#include<iostream>
#include<vector>
using namespace std;

void printsubset(vector<int> v , vector<int> &res , int i )
{
    if(i==v.size())
    {
        for(auto val : res)
        {
            cout << val  << " " ;
        }
        cout << endl;
        return ;
    }

    res.push_back(v[i]);
    printsubset(v,res,i+1);
    res.pop_back() ;
    printsubset(v,res,i+1);

}

int main()
{
    vector<int> v = {1,2,3} ;
    int i = 0 ;
    vector<int> res ;
    printsubset(v,res,i);
}