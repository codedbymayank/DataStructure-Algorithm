#include<iostream>

using namespace std;

void passed_by_pointer(int *ptrval)
{
   *ptrval*=90;
}

void passed_by_refrence_alias(int &ptrval)
{
   ptrval*=20;
}


int main()
{
    int c = 100 ;
    cout << "Address of c is : " << &c << endl;

    //Assigning address of another variable
    int *pt = &c;
    cout << "value of pt : " << *pt << endl ;
    cout << "Address of pt : " << &pt << endl ;

    //Pointer To Pointer for which we use ** with a variable
    int **ptr = &pt;
    cout << "value of pt : " << ptr << endl ;
    
    //Dereferencing Operator
    cout << "Value present in ptr : " << **ptr << endl;

    //Null Pointer :- Just to show that we haven't stored anything till yet

    int* p = NULL;

    //Passed By Refrence :- Contains two things one is ( Pointer ) & Refrence ( Alias )
    int x = 120 ;
    passed_by_pointer(&x) ;
    cout << "After using Pointer : " << x << endl;

    int y = 90 ;
    // Most of the we used in this way
    passed_by_refrence_alias(y) ;
    cout << "After using Reference Or Creating alias : " << x << endl;


    //Array Pointer
    int arr[4] = {1 , 2 , 3 ,4} ;
    
    //arr is already a pointer here
    cout << "Address of arr : " << arr << endl;
    cout << "Value of first address : " << *arr << endl;


}