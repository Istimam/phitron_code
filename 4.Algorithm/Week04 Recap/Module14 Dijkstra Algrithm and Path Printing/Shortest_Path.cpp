#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adjl[N];
bool visited[N];
int level[N] = {-1};
int par[N];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    level[u] = 0;
    visited[u] = true;
    par[u] = -1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        
        for(int child: adjl[parent])
        {
            if(!visited[child])
            {
                q.push(child);
                par[child] = parent;
                level[child] = level[parent] + 1;
                visited[child] = true;
            }
        }
    }
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }
    bfs(1);
    int d;
    cin >> d;

    if(visited[d])
    {
        vector<int> pa;
        int x = d;
        while (x != -1)
        {
            pa.push_back(x);
            x = par[x];
        }
        reverse(pa.begin(), pa.end());
        for(int val: pa)
        {
            cout << val << " ";
        }
    }
    else
    {
        cout << "Path nei." << endl;
    }
    return 0;
}