#include<iostream>
using namespace std;
int main()
{
    //Checking number is prime or not
    int num ;
    cin >> num ;
    int start = 2 ;
    bool value = true ;
    do
    {
        if(num%start == 0)
        {
            value = false;
            break;
        }
        start++;
        
    }
    while(start < num) ;

    if(value == true)
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;

    }
}