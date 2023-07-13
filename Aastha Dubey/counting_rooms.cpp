#include<iostream>
#include<vector>
using namespace std;
void dfs(int i,int j,vector<vector<int>>&vis,int n,int r,char a[][1001])
{
    vis[i][j]=1;
    if(i<0 || j<0 || i>=n||j>=r )
    return;
    if(a[i][j]=='#')
    return ;
    // traverse its neighbors
        int dRow[] = {-1, 0, 1, 0};
        int dCol[] = {0, 1, 0, -1};
        for (int k = 0; k < 4; k++) {
            int nrow = i + dRow[k];
            int ncol = j+ dCol[k];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < r && a[nrow][ncol] == '.' && !vis[nrow][ncol]) {
                dfs(nrow, ncol, vis,n,r, a);
            }
        }
}
int main()
{
    int n,r;
    cin>>n>>r;
    int c=0;
    char a[1001][1001];
    vector<vector<int>>vis(n,vector<int>(r,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(!vis[i][j] && a[i][j]=='.')
            {
                dfs(i,j,vis,n,r,a);
                c++;
            }
        }
    }
    cout<<c<<endl;
}
//graph