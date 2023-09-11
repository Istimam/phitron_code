#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level [N] = {0};
void bfs(int x)
{
   queue<int> q;
    q.push(x);
    while (!q.empty())
    {     
        int parent = q.front();
        q.pop();
        visited[parent] = true;

        for(int v:adj[parent])
        {
            if(visited[v]) continue;
            visited[v] = true;
            q.push(v);
            level[v] = level[parent]+1;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while (m--)
    {
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    int h;
    cin>>h;
    bfs(h);
    int cnt = 0;
    for(int i = 0; i< N; i++)
    {
        if(level[i] != 1) continue;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
