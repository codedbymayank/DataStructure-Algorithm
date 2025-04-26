#include<iostream>
using namespace std;

//Function Define
void Samplefunction()
{
    cout << "Just Defining a function" << endl;
}

int integerfunction()
{
    return 4;
}

//Parameterise Function
int parafunc(int a , int b)
{
    return (a+b) ;
}

//Calculation sum from 1 to n 
int calc_sum(int no)
{
    int sum = 0 ;
    for(int i = 0 ; i <=no ; i++)
    {
        sum = sum + i ;
    }

    return sum ;
}

int pass_by_val_func(int a , int b)
{
    a = a + 20;
    return a+b;
}

int main()
{
    Samplefunction();
    int value = integerfunction();
    cout << value << endl;

    int sumvalue = parafunc(4,7);
    cout << sumvalue << endl;

    int sum_val = calc_sum(10);
    cout << sum_val << endl;

    int x = 100 , y = 10 ; 
    cout << pass_by_val_func(x,y) << endl; 
    cout << x << endl;
}
