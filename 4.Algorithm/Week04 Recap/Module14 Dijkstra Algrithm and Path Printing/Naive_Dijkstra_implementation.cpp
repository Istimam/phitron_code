#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<pair<int,int>> edge[N];
int dis[N];
void dijkstra(int s)
{
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(auto child:edge[parent])
        {
            int childNode = child.first;
            int childCost = child.second;
            if(dis[parent]+childCost < dis[childNode])
            {
                dis[childNode] = dis[parent] + childCost;
                q.push(childNode);
            }
        }
    }
    
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edge[u].push_back({v, w});
        edge[v].push_back({u, w});
    }
    for (int i = 1; i <= n;i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(1);
    for (int i = 1; i <= n;i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }
    return 0;
}