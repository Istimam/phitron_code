#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef pair<int,int> pii;
vector<pii> edge[N];
bool visited[N];
int dis[N];
void dijkstra(int s)
{
    priority_queue < pii, vector<pii>, greater < pii>> pq;
    pq.push({0,s});
    dis[s] = 0;
    while (!pq.empty()) /*O(n + V *(N + log E))*/
    {
        pii parent = pq.top();
        pq.pop();

        int parentNode = parent.second;
        int parentCost = parent.first;
        if(visited[parentNode])
        {
            continue;
        }
        visited[parentNode] = true;

        for(auto child: edge[parentNode])  /*O(N + log E)*/
        {
            int childNode = child.first;
            int childCost = child.second;
            if(parentCost+childCost < dis[childNode])
            {
                dis[childNode] = parentCost+childCost;
                pq.push({dis[childNode],childNode});   /*O(logN)*/
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