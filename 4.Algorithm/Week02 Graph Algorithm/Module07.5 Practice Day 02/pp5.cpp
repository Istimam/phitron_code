#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj_list[N];
vector<int> cclist[N];
int visited[N];
queue<int> q;
void bfs(int start,int ccom)
{
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cclist[ccom].push_back(parent);
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
            cc++;
            bfs(i,cc);
        }
    }
    cout<<cc<<endl;
    for(int i = 1; i <= cc; i++)
    {
        cout<<"Component "<<i<<" : ";
        for(int cmp: cclist[i])
        {
            cout<<cmp<<" ";
        }
        cout<<endl;
    }
    return 0;
}