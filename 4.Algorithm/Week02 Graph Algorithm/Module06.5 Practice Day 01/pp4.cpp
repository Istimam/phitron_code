#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool Visited[N];
int depth[N];
void dfs(int x)
{
    Visited[x] = true;
    for (int v:adj[x])
    {
        if(Visited[v]) continue;
        depth[v] = depth[x]+1;
        dfs(v);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    int x;
    cin>>x;
    cout<<"Depth of "<<x<<" = "<<depth[x];
    
    return 0;
}