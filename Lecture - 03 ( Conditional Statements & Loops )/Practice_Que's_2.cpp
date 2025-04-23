#include<iostream>
using namespace std;
int main()
{
   // Sum of numbers from 1 to N 

   int num ;
   cout << "Enter a number\n";
   cin >> num ;
   int sum = 0 ;
   for(int i = 0 ; i <=num ; i++)
   {
        sum = sum + i ;
   }

    cout << "Sum of all numbers " << sum  << endl;

    //Sum of all odd numbers from 1 to N ;

    int oddnumsum = 0 ;
   for(int i = 0 ; i <= num ; i++)
   {
     if(i%2!=0)
     {
          oddnumsum = oddnumsum + i ;
     }
   }

   cout << "Sum of odd numbers : " << oddnumsum << endl;

}