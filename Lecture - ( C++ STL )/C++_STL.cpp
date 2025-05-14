#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
    //Vector
    vector<int> vec = { 2 , 6 , 8 , 1} ;
    cout << "Size Of Vec : " << vec.size() << endl ;
    cout << "Capacity Of Vec : " << vec.capacity() << endl ;
    vec.push_back(101) ;
    vec.pop_back();
    vec.at(0);
    vec.front();

    //Only we know size and we wanna initialize with same value 
    vector<int> v(2,10);

    //for copy one vector elements with another one
    vector<int> v3(v);
    //To Erase value from a vector
    vec.erase(vec.begin()+1) ;
    //Erase change size of function , but capacity still remains same
    vec.insert(vec.begin()+1 ,100);

    vector<int> :: iterator it ;

    
    //List :- push_back() , push_front() , emplace_back() , emplace_front() , pop_back() , pop_front() 
    // Push and pop can be done from both side , that's why internally its implemented as a doubly linkedList
    //Other than that all function are same which are in vector
    // In list we will not get any random value
    list<int> l = {22 , 10 , 2};

    //Double Ended Queue :- all are same which are in list and its implemeneted with the help of dynamic arrays 
    //Random value access is possible in deque

    //Pairs :- It can be like dictionary
    // Both values which are in pair , type can be different both of them
    pair<int,double> p = {23 , 120.18} ;
    cout << p.first << endl;
    cout << p.second << endl;
    pair<int , pair<int,double>> pai = {10,{32,12}};
    cout << pai.second.first << endl;
    
    //Stack
    stack<int> s ;
    s.push(100);
    s.push(100);
    s.push(100);
    s.pop();

    stack<int> s2;
    s2.swap(s) ;

    //Queue
    queue<int> q ;
    q.push(100);
    q.push(1120);
    q.pop();

    //Priroty_Queue
    priority_queue<int> pq ;
    //For Increasing order
    //greater<int> :- Functor which we pass to perform some work and its a object or it can be comparator
    priority_queue<int , vector<int> , greater<int>> p;
    pq.push(21);
    pq.pop();
    pq.top();

    //Map :- If we are trying to print multiple data in map , then it will print data lexicographically
    // By default it sort our data
    map<string , int>  mp ;
    mp["key1"] = 21 ;
    mp["key2"] = 21 ;
    cout << mp["key1"] << endl;
    mp.insert({"key4",823});

    //In map and unordered map during printing data it will not print duplicate values 

    multimap<string , int> mtp ;
    mtp.emplace("mt1",2);
    
    //Unordered map :- It stores data in random order
    unordered_map<string , int> unm;
    unm.insert({"kuchbhi",10});

    set<int> st ;
    st.insert(100);
    st.insert(120);
    st.insert(1120);
    st.insert(90);

    //Sort function
    sort(v.begin(),v.end());
    
    //reverse function
    reverse(v.begin(),v.end());
}