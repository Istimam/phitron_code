#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adj[N];
vector<int> component[N];
bool visited[N];
void dfs(int u,int cc)
{
    visited[u] = true;
    component[cc].push_back(u);
    for(int v:adj[u])
    {
        if(visited[v]) continue;
        dfs(v,cc);
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
        if(u == v) continue;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int cc = 0;
    for (int i = 0; i < N; i++)
    {
        if(visited[i] == true || adj[i].empty()) continue;
        dfs(i,cc);
        cc++;
    }
    int sz[cc];
    for (int i = 0; i < cc; i++)
    {
        sz[i] = component[i].size();
    }
    sort(sz,sz+cc);
    for (int i = 0; i < cc; i++)
    {
        cout<<sz[i]<<" ";
    }
    
    // cout<<cc<<" ";
    return 0;
}