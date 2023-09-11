#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int height[N];
void dfs(int u)
{
    // section 1: actions just after entering node u
    visited[u] = true;
    for(int v:adj[u])
    {
        // section 2: actions before entering a new neighbor
        if(visited[v]) continue;
        dfs(v);
        // section 3: actions before exiting node u
        // now we can determine the height
        if(height[v]+1 > height[u])
        {
            height[u] = height[v] + 1;
        }
    }
    // section 4: actions before exiting node u
}
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);

    for (int i = 1; i <= m; i++)
    {
        cout<<"Height of Node"<<i<<": "<<height[i];
        cout<<endl;
    }
    
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;


vector<int> adj[13];
bool visited[13];
int height[13];
void dfs(int u)
{
    visited[u] = true;
    for(int v:adj[u])
    {
        if(visited[v]) continue;
        dfs(v);
        if(height[v]+1 > height[u])
        {
            height[u] = height[v] + 1;
        }
    }
}
int main()
{
    int n=11,m=12;
    int u[m] = {1,1,1,2,2,5,5,6,3,10,10};
    int v[m] = {2,3,10,4,5,6,7,8,9,11,12};
    for (int i = 0; i < m; i++)
    {
        adj[u[i]].push_back(v[i]);
    }
    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout<<"Height of Node"<<i<<": "<<height[i];
        cout<<endl;
    }
    
    return 0;
}
*/