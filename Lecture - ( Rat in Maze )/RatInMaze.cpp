#include<iostream>
#include<vector>
using namespace std;

void newfunction(vector<vector<int>> v , int row , int col , string path , vector<string> &ans, vector<vector<bool>> &visit)
{
    int n = v.size() ;
    if(row<0 || col<0 || row>=n || col>=n || v[row][col]==0 || visit[row][col]==true)
    {
        return ;
    }

    if(row == (n-1) && col == (n-1))
    {
        ans.push_back(path);
        return;
    }

    visit[row][col]=true;
    //for down
    newfunction(v,row+1,col,path+"D" ,ans,visit);
    //for up
    newfunction(v,row-1,col,path+"U" ,ans,visit);
    //for left
    newfunction(v,row,col-1,path+"L" ,ans,visit);
    //for right
    newfunction(v,row,col+1,path+"R" ,ans,visit);

    //Backtracking step which works , after completion of all recusrive calls
    visit[row][col]=false;


}

vector<string> findallpaths(vector<vector<int>> v)
{
    vector<string> ans;
    int n = v.size();
    vector<vector<bool>> visit(n,vector<bool>(n,false)) ;
    string path = "";
    newfunction(v,0,0,path,ans,visit);
    return ans;

}

int main()
{
    vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans = findallpaths(mat);
    for(auto res : ans)
    {
        cout << res << endl;
    }
}