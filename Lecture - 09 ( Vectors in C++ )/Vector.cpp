#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    vector<int> newvec{3,77,10,21};
    
    //Access through index
    cout << newvec[2] << endl;

    //Access through loop
    for(int i : newvec)
    {
        cout << i << " " ;
    }

    //Vector Functions
    cout << vec.size() << " " ;
    newvec.push_back(40);
    newvec.push_back(10);
    newvec.push_back(45);
    newvec.pop_back();
    newvec.at(3);

    //Capacity & Size
    cout << newvec.size() << endl;
    cout << newvec.capacity() << endl;



}