#include<iostream>
using namespace std;

//Optimised Approach using Kadane's algorithm
int Maximum_subarray(int arr[] , int size)
{
    int max_sum = INT32_MIN;
    int current_sum = 0 ;
    for(int st = 0 ; st < size ; st++)
    {
        current_sum+=arr[st];
        max_sum = max(max_sum,current_sum);
        if(current_sum<0)
        {
            current_sum = 0;
        }
        
    }

    return max_sum;

}

int main()
{
    int new_array[5]={1,2,3,4,5};

    int result = Maximum_subarray(new_array , 5);
    cout << result << endl;
}