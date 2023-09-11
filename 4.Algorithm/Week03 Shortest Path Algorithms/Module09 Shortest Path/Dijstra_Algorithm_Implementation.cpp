#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int INF = INT_MAX;
typedef pair<int,int> pii;
vector<pii> adj[N];
vector<int> dist(N,INF);
vector<bool> visisted(N);
void dijkstra(int source)
{
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source],source});
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        visisted[u] = true;

        for(pii vpair:adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(visisted[v]) continue;

            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v],v});
            }
        }
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijkstra(1);   

    for (int i = 1; i <= n; i++)
    {
        cout<<"Distance of Node "<<i<<": ";
        cout<<dist[i]<<endl;
    }
     
    return 0;
}