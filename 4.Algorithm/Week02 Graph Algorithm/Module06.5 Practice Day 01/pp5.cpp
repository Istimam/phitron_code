#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool Visited[N];
int height[N];
void dfs(int x)
{
    Visited[x] = true;
    for (int v:adj[x])
    {
        if(Visited[v]) continue;
        dfs(v);
        if(height[v]+1 > height[x])
        {
            height[x] = height[v]+1;
        }
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
    cout<<"height of "<<x<<" = "<<height[x];
    
    return 0;
}