#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj_list[N];
vector<int> level(N);
bool visited[N];
queue<pair<int,int>> q;
bool bfs(int u)
{
    visited[u] = true;
    level[u] = 0;
    q.push({u,-1});
    while (!q.empty())
    {
        int current = q.front().first;
        int parent = q.front().second;
        q.pop();
        visited[current] = true;
        for(int neighbor : adj_list[current])
        {
            if(!visited[neighbor]) 
            {
                q.push({neighbor,current});
            }
            else if(neighbor != parent)
            {
 // If the neighbor is visited and it's not the parent, then a cycle is detected
                return true;
            }
        }
    }
    return false; // No Cycle Detected
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

    bool hasCycle = false;
    for (int i = 1; i <= n; i++)
    {
        // if(!visited[i])
        // {
        //     if(bfs(i))
        //     {
        //         hasCycle = true;
        //         break;
        //     }
        // }
        if(visited[i]) continue;
        hasCycle |= bfs(i); 
    }
    
    if(hasCycle)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}