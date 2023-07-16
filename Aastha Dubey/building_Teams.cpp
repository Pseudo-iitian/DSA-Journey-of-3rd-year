#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool bfs(int i, vector<vector<int>>& graph, vector<int>& color) {
    queue<int> q;
    q.push(i);
    color[i] = 0; 
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (auto it : graph[node]) {
            if (color[it] == -1) {
                color[it] = !color[node];
                q.push(it);
            } else if (color[it] == color[node])
                return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> graph(n + 1);
    vector<int> color(n + 1, -1);
    
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for (int i = 1; i <= n; i++) {
        if ( color[i]==-1 && !bfs(i, graph, color)) {
            cout << "IMPOSSIBLE";
            return 0;
        }
    }
    
   for(int i=1;i<=n;i++)
   {
    if(color[i]==0)
    {
        cout<<2<<" ";
    }
    else{
        cout<<color[i]<<" ";
    }
   }
    
    return 0;
}
