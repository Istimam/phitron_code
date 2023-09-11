#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int depth[N];
void dfs(int u)
{
    // section 1: actions just after entering node u
    visited[u] = true;
    for(int v:adj[u])
    {
        // section 2: actions before entering a new neighbor
        if(visited[v]) continue;
        depth[v] = depth[u]+1;
        dfs(v);
        // section 3: actions before exiting node u
    }
    // section 4: actions before exiting node u
}
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout<<"Depth of Node"<<i<<": "<<depth[i];
        cout<<endl;
    }
    
    return 0;
}