#include<iostream>
using namespace std;
int main()
{
    int score = 60 ;
    if(score>=100)
    {
        cout << "Yu are at the top\n" ;
    }
    else if(score>=60 && score <100)
    {
        cout << "You are at average\n"; 
    }
    else
    {
        cout << "You are at lower level\n";
    }


}