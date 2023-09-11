#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj_list[N];
vector<int> level(N);
bool visited[N];
queue<int> q;
void bfs(int u)
{
    visited[u] = true;
    level[u] = 0;
    q.push(u);
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int v:adj_list[parent])
        {
            if(visited[v]) continue;
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[parent]+1;
            }
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
    int x;
    cin>>x;
    bfs(1);
    cout<<"Level of "<<x<<" = "<<level[x]<<endl;
    return 0;
}