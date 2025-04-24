#include<iostream>
using namespace std;

void func1()
{
    cout << "Function 1 Called";
    func1();
}

void printNumber(int no)
{
    if(no == 1)
    {
        cout << no ; 
        return ;
    }
    cout << no << " " ;
    printNumber(no-1) ;
}
int main()
{
    // func1();
    printNumber(5);
}