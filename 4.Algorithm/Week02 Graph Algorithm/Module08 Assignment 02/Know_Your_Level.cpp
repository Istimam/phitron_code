#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level [N] = {-1};
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    level[x] = {0};
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
    bfs(0);

    int h;
    cin>>h;
    int ar[N] = {0};
    int cnt = 0;
    for(int i = 0; i < N; i++)
    {
      if(level[i] != h) continue;
        cnt++;
        ar[cnt]  = i;
    }
    sort(ar,ar+N);
    bool found = find(level,level+n,h) != level+n;
    if(h == 0)
    {
        cout<<"0";
    }
    else if(found)
    {
        for(int v:ar)
        {
            if(v == 0) continue;
            cout<<v<<" ";
        }
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
