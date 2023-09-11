#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adjl[N];
bool visited[N];
void dfs(int x)
{
    cout << x << " " << endl;
    visited[x] = true;
    for(int v: adjl[x])
    {
        if(visited[v]) continue;
        dfs(v);
    }
    
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }
    dfs(1);
    return 0;
}