#include<iostream>
#include<vector>
using namespace std;

//BubbleSort :- compare adjacent elements , TC :- O(n^2)
void bubble_sort(vector<int> &v)
{
    int arr_size = v.size() ;
    for(int i = 0 ; i < arr_size-1 ; i++)
    {
        for(int j = 0 ; j < arr_size-i-1 ; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

//Selection Sort
void Selection_sort(vector<int> &v)
{
    int arr_size = v.size() ;
    for(int i = 0 ; i < arr_size-1 ; i++)
    {
        int smallest_index = i ;
        for(int j = i  + 1 ; j < arr_size ; j++)
        {
            if(v[j]<v[smallest_index])
            {
                smallest_index = j ;
            }
        }
        swap(v[i],v[smallest_index]);
    }
}

//Insertion Sort
void Insertion_Sort(vector<int> &v)
{
    for(int i = 1 ; i < v.size() ; i++)
    {
        int current = i ;
        int prev_index = i - 1 ;
        while(prev_index>=0 && v[prev_index]>current)
        {
            v[prev_index+1] = v[prev_index] ;
            prev_index--;
        }
        v[prev_index+1] = current;
    }
}

int main()
{
    vector<int> v = {4 , 1 , 5 , 2 , 3} ;
    
    // bubble_sort(v);
    
    // Selection_sort(v) ;
    
    Insertion_Sort(v);

    for(int value : v)
    {
        cout << value << " " ;
    }
}