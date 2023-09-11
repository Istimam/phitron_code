#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
void dfs(int u)
{
    visited[u] = true;
    for(int v:adj[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int v:adj[parent])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
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

    int cc = 0;
    for(int i = 1; i<= n;i++)
    {
        if(visited[i]) continue;
        dfs(i);
        bfs(i);
        cc++;
    }
    cout<<"Number of connected componnents = "<<cc<<endl;
    return 0;
}