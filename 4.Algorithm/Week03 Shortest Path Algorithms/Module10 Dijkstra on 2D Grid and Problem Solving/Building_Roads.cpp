#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> visited(N,false);
// bool visited[N];
void my_dfs(int x)
{
    // cout<<x<<" ";
    visited[x] = true;
    for(int v:adj[x])
    {
        if(visited[v]) continue;
        my_dfs(v);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    // cout<<n<<" "<<m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        // cout<<u<<" "<<v<<endl;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> leader;
    for(int i = 1; i <= n;i++)
    {
        // cout<<i<<" ";
        if(visited[i]) continue;
        leader.push_back(i);
        my_dfs(i);
        
    }
    cout<< leader.size() - 1<<endl;
    // for(int v: leader)
    // {
    //     cout<<v<<" ";
    // }
    for(int i = 1; i < leader.size(); i++)
    {
        cout<<leader[i-1] <<" "<<leader[i]<<endl;
    }
    return 0;
}