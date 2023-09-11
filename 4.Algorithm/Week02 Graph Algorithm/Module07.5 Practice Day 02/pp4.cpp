#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj_list[N];
int visited[N];
queue<int> q;
void bfs(int start)
{
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int child: adj_list[parent])
        {
            if(visited[child]) continue;
            {
                q.push(child);
                visited[child] = true;
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

    int cc = 0;
    for(int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        {
            bfs(i);
            cc++;
        }
    }
    cout<<cc<<endl;
    return 0;
}