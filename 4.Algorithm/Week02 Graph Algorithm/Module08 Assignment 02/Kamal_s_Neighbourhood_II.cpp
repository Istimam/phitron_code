#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level = 0;
 void dfs(int x)
{
   visited[x] = true;
    for(int v:adj[x])
    {
        if(visited[v]) continue;
        dfs(v);
        level++;
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
    }
    int h;
    cin>>h;
    dfs(h);
    cout<<level;
    return 0;
}



