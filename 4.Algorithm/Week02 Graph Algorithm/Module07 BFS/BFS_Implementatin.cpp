#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout<<"Visitiing node: "<<parent<<endl;
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
    bfs(1);
    return 0;
}