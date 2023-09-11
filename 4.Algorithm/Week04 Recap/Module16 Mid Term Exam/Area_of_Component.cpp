#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
typedef pair<int,int> pii;
vector<pii> direc = {{0,-1},{0,1},{-1,0},{1,0}};
vector<string> g;
int visited[N][N];
int n,m;
bool isValid(int i,int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
void dfs(int i, int j,int &ct)
{
    if(!isValid(i,j)) return;
    if(visited[i][j])  return;
    if(g[i][j] == '-') return;
    ct++;
    visited[i][j] = true;

    for(auto d:direc)
    {
        dfs(i+d.first, j+d.second,ct);
    }
}
int main()
{
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        g.push_back(x);
    }
    // vector<int> r;
    int r = INT_MAX;
    for(int i = 0; i<n ;i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ct = 0;
            if(g[i][j] == '-') continue;
            if(visited[i][j]) continue;
            dfs(i,j,ct);
            if(ct < r)
            {
                r = ct;
            }
        }
        
    }
    if(r == INT_MAX)
    {
        cout << -1;
    }
    else
        cout << r;
    return 0;
}