#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<bool> Visited(N,false);
vector<int> g[N];
vector<int> level(N,-1);
vector<int> parent(N,-1);
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    level[source] = 0;
    Visited[source] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v:g[u])
        {
            if(Visited[v])  continue;
            q.push(v);
            Visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
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
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    vector<int> path;
    int curr = n;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }
    if(path.size() != level[n]+1)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        cout<<path.size()<<endl;
        reverse(path.begin(), path.end());
        for(auto p: path)
        {
            cout<<p<<" ";
        }
    }
    return 0;
}