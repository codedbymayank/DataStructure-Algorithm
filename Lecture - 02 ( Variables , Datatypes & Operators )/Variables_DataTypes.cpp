#include<iostream>
using namespace std;
int main()
{

   //Variables & DataTypes 
   int a = 100 ;
   cout << sizeof(a) << endl; 

   string name = "Mayank" ;
   cout << name << endl;
   
   char ch = 'A' ;
   cout << ch << endl;

   float price = 10.9;
   cout << price << endl;

   bool value = true ;
   cout << value << endl;

   //TypeCasting
   char alpha = 'D' ;
   int newvalue = alpha;
   cout << newvalue << endl;

   double v = 100.3;
   int somevalue = int(v);
   cout << somevalue << endl;
}