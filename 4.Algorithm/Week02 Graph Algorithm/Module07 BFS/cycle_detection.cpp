#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
// int parent[N];
bool CycleDfs(int u, int p=-1)
{
    bool cycleExist = false;
    visited[u] = true;
    for(int v:adj[u])
    {
        if(v == p) continue;
        if(visited[v]) return true;
        cycleExist = CycleDfs(v,u);
    }
    return cycleExist;
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

    /*Type 2*/
    // if(CycleDfs(1))
    // {
    //     cout<< " Cycle Detected!\n";
    // }
    // else
    //     cout<<"No Cycle Detected!\n";
    
    /*Type 3*/
    bool hasCyle = false;
    for (int i = 1; i < n; i++)
    {
        if(visited[i]) continue;
        hasCyle |= CycleDfs(i);
    }

    if(hasCyle)
    {
        cout<< " Cycle Detected!\n";
    }
    else
        cout<<"No Cycle Detected!\n";
    
    return 0;
}