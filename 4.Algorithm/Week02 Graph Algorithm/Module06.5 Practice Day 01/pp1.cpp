#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
vector<int> store(N);
void dfs(int u)
{
    visited[u] = true;
    for(int v:adj[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
    // cout<<"Visiting Node: "<<u<<endl;
    store.push_back(u);
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
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<"Node"<<i<<": ";
    //     for(int j:adj[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    dfs(1);
    // for(int i = 1; i <= n; i++)
    // {
    //     cout<<store[i]<<endl;
    // }
    for(int v:store)
    {
        if( v == 0) continue;
        cout<<"Visiting Node: " <<v<<endl;
    }
    return 0;
}