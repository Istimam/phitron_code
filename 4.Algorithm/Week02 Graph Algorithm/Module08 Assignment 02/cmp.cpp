#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
vector<int> l_components;
bool bfs(int x,int ll)
{
    queue<pair<int,int>> q;
    q.push({x,0});
    bool rt = false;
    while (!q.empty())
    {
      
        int current = q.front().first;
        int l   = q.front().second;
        q.pop();
        visited[current] = true;
        for(int v:adj[current])
        {
            if(visited[v]) continue;
            visited[v] = true;
            q.push({v,l + 1});
            l = q.front().second;
            if(l == ll)
            {
                l_components.push_back(v);
                rt = true;
            }
        }
    }
    return rt;
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
    bool rt = bfs(0,h);
    sort(l_components.begin(),l_components.end());
    if(h == 0)
    {
        cout<<"0";
    }
    else if(rt)
    {
        for(int v:l_components)
        {
            cout<<v<<" ";
        }
    }
    else 
    {
        cout<<"-1";
    }
    return 0;
}
