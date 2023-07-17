#include<iostream>
#include<vector>
using namespace std;
void dfs(int i , vector<int>&vis,vector<vector<int>>&graph)
{
  vis[i]=1;
  for(auto it:graph[i])
  {
        if(!vis[it]) 
        {
            dfs(it,vis,graph);
        }
  }
}
int main()
{
int n,m;
cin>>n>>m;
int u,v;
int c=0;
vector<int>ans;
 vector<vector<int>> graph(n+1);
vector<int>vis(n+1,0);
for(int i=0;i<m;i++)
{
    cin>>u>>v;
    graph[u].push_back(v);
     graph[v].push_back(u); 
}
for(int i=1;i<=n;i++)
{
    if(!vis[i])
    {
        c++;
        ans.push_back(i);
        dfs(i,vis,graph);
    }
}
cout<<c-1<<endl;
int s=ans[0];
int e;
if(c>1)
{
for(int i=1;i<c;i++)
{
 e=ans[i];
 cout<<s<<" "<<e<<endl;
 s=e;
}
}
}