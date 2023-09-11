#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
int bfs(int s,int d)
{
    bool visited[N] = {false};
    queue<pair<int,int>> q;
    q.push({s,0});
    while (!q.empty())
    {
        int current = q.front().first;
        int distance = q.front().second;
        q.pop();
        if(current == d)
        {
            return distance;
        }
        visited[current] = true;
        for(int v:adj[current])
        {
            if(visited[v]) continue;
                visited[v] = true;
                q.push({v,distance+1});
            
        }
    }
    return -1;
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
    int q;
    cin>>q;
    while (q--)
    {
        int s,d;
        cin>>s>>d;
        int dis = bfs(s,d);
        cout<<dis<<endl;
    }
    return 0;
}