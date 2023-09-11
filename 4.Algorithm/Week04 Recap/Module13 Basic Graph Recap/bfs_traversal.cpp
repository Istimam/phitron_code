#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjl[N];
int level[N] = {0};
bool visited[N];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for(int x:adjl[v])
        {
            if(visited[x]) continue;
            q.push(x);
            visited[x] = true;
            level[x] = level[v] + 1;
        }
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
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << level[i] << endl;
    }
    
    return 0;
}