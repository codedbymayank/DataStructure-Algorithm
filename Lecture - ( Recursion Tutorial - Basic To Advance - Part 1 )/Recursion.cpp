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

int Sum_Of_N_Numbers(int no)
{
    
    if(no==0)
    {
        return 0 ;    
    }

    return no + Sum_Of_N_Numbers(no-1) ;
}

int main()
{
    // func1();
    printNumber(5);
    cout << endl;
    int result = Sum_Of_N_Numbers(5);
    cout << "Sum of N Numbers : " << result << endl;
    /*
        TC = total calls * WD in each calls
        TC = n * O(1)
        TC = O(n)
        
        SC = O(n)
     */

}