#include<iostream>
using namespace std;
int main()
{
    int num = 21 ;
    if(num>=18)
    {
        cout << "Ready To Vote" << endl;
    }
    else{
        cout << "Not Possible" << endl;
    }

    if(num%2==0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}