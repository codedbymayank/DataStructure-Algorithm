#include<iostream>
#include<vector>
using namespace std;

bool issafe(vector<string> &board , int row , int col , int n)
{
    //For Horizontal
    for(int j = 0 ; j < n ; j++)
    {
        if(board[row][j]=='Q')
        {
            return false;
        }
    }

     //For vertical
     for(int j = 0 ; j < n ; j++)
     {
         if(board[j][col]=='Q')
         {
             return false;
         }
     }

      //For leftdiagonal
    for(int i=row , j = col ; i>=0&& j>=0 ; i--,j--)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }

    
      //For rightdiagonal
      for(int i=row , j = col ; i>=0&& j<n ; i--,j++)
      {
          if(board[i][j]=='Q')
          {
              return false;
          }
      }

      return true ;

}
void nqueens(vector<string> &board , int row , int n , vector<vector<string>> ans)
{
    if(row==n)
    {
        ans.push_back({board});
        return ;
    }

    for(int j = 0 ; j <n ; j++)
    {
        if(issafe(board , row , j , n))
        {
            board[row][j] = 'Q';
            nqueens(board,row+1,n,ans);
            board[row][j]='.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans ;
        nqueens(board,0,n,ans);
        return ans;


}

int main()
{
    vector<vector<string>> res = solveNQueens(4);
}