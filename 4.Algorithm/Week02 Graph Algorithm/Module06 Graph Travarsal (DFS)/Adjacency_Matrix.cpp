#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int adjmat[N][N];

int main()
{
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        // int u,v;
        // cin>>u>>v; 

        // adjmat[u][v] = 1; // Directed

        // adjmat[u][v] = 1; // UnDirected
        // adjmat[v][u] = 1;
        
        int u,v,w;
        cin>>u>>v>>w; // Weighted Input 

        // adjmat[u][v] = w; // Directed Weighted

        adjmat[u][v] = w; // Directed Weighted
        adjmat[v][u] = w;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}