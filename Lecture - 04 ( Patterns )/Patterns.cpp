#include <iostream>
using namespace std;
int main()
{

    //Pattern 1 
    /*
        1234
        1234
        1234
    */

    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     for(int j = 0 ; j < 4 ; j++)
    //     {
    //         cout << (j+1) << " " ;
    //     }
    //     cout << endl;
    // }

    //Pattern 2
    /*
        123
        456
        789
    */
    // int start = 1 ;
    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     for(int j = 0 ; j < 3 ; j++)
    //     {
    //         cout << start << " ";
    //         start = start + 1 ;
    //     }

    //     cout << endl;
    // }

    //Pattern 3
    /*
        *
        **
        ***
        ****
    */

    // for(int i = 0 ; i < 4 ; i++)
    // {
    //     for(int j = 0 ; j < i+1 ; j++)
    //     {
    //         cout << '*' << " " ;
    //     }

    //     cout << endl;
    // }

    //Pattern 4 
    /*
        1
        2 2
        3 3 3
        4 4 4 4
    */

    // int startvalue = 1 ;
    // for(int i = 0 ; i < 4 ; i++)
    // {
    //     for(int j = 0 ; j < i+1 ; j++)
    //     {
    //         cout << startvalue << " " ;
    //     }
    //     startvalue+=1;
    //     cout << endl;
    // }

    //Pattern 5
    /*
        1
        1 2 
        1 2 3
        1 2 3 4
    */

    // for(int i = 0 ; i < 4 ; i++)
    // {
    //     int start = 1;
    //     for(int j = 0 ; j < i+1 ; j++)
    //     {
    //         cout << start << " ";
    //         start+=1;
    //     }

    //     cout << endl;
    // }

    //Pattern 6
    /*
        1
        2 3 
        4 5 6
        7 8 9 10
    */

    // int starting_value = 1 ;
    // for(int i = 0 ; i < 4 ; i++)
    // {
    //     for(int j = 0 ; j < i+1 ; j++)
    //     {
    //         cout << starting_value << " " ;
    //         starting_value+=1;
    //     }
    //     cout << endl;
    // }

    //Pattern 7
    /*
        1 1 1 1
          2 2 2
            3 3 
              4
    */

    int start_value = 1 ;
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            if(j>=i)
            {
              cout << start_value << " " ;

            }
            else
            {
                cout << " " << " " ;
            }
        }
        start_value+=1;
        cout << endl;
    }

}