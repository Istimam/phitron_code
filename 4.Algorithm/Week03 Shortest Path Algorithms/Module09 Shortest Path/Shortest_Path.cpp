#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level [N];
int parent [N];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    level[u] = 0;
    parent[u] = -1;
    while (!q.empty()) // Compexity O(n)
    {
        int current = q.front();
        q.pop();
        // cout<<"Visitiing node: "<<current<<" "<<level[current]<<endl;
        for(int v:adj[current]) // Complexity O(m)
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[current]+1;
            parent[v] = current;
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
    int s,d;
    cin>>s>>d;
    bfs(s);  // Complexity O(n+m)
    cout<<"Distance of "<<d<<" : "<<level[d]<<endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<parent[i]<<" ";
    // }

    
    vector<int> path;
    int current = d;
    while (current != -1)   // Path Finding O(n)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(),path.end());

    cout<<"Path of "<<d<<" : ";
    for(int v:path)
    {
        cout<<v<<" ";
    }
    return 0;
}