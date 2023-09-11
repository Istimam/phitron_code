#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
// vector<int> adj[N]; // For Not Weighted

vector <pair<int,int>> adj[N]; // For Weighted

int main()
{
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        // int u,v;
        // cin>>u>>v;

        // adj[u].push_back(v); // Directed

        // adj[u].push_back(v); // UnDirected
        // adj[v].push_back(u);
        
        int u,v,w;
        cin>>u>>v>>w; // Weight Input

        // adj[u].push_back({v,w}); // Directed Weighted

        adj[u].push_back({v,w}); // UnDirected Weighted
        adj[v].push_back({u,w});
    }

    // for(int i=1;i<=n;i++) // Without Weight
    // {
    //     cout<<"Node "<<i<<": ";
    //     for(int j:adj[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i = 1; i <= n; i++) // Weighted
    {
        cout<<"List "<<i<<": ";
        for(auto j:adj[i])
        {
            cout<<"("<<j.first<<" "<<j.second<<")"<<" ";
        }
        cout<<endl;
    }
    return 0;
}