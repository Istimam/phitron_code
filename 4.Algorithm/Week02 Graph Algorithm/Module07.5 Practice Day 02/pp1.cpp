#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj_list[N];
bool visited[N];
vector<int> visiting_order(N);
queue<int> q;
void bfs(int u)
{
    visited[u] = true;
    q.push(u);
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        visiting_order.push_back(parent);
        for(int v:adj_list[parent])
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
    for(int i = 1; i <= m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bfs(1);
    reverse(visiting_order.begin(),visiting_order.end());
    for(int v:visiting_order)
    {
        if(v == 0) continue;
        cout<<v<<" ";
    }
    return 0;
}