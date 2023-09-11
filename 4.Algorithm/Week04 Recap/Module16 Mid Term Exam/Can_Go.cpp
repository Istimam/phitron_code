#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
typedef pair<long long,int> pii;
vector<pair<int,long long>> edge[N];
bool visited[N];
long long dis[N];
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
        long long parentCost = parent.first;
        if(visited[parentNode])
        {
            continue;
        }
        visited[parentNode] = true;
        for(auto child: edge[parentNode])  /*O(N + log E)*/
        {
            int childNode = child.first;
            long long childCost = child.second;
            if(parentCost + childCost < dis[childNode])
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
    for (int i = 1; i <= n; i++)
    {
            edge[i].clear();
            dis[i] = LLONG_MAX;
            visited[i] = false;
    }
    
    while(e--)
    {
    int u, v;
    long long w;
    cin >> u >> v >> w;
    edge[u].push_back({v, w});
    }
    int s;
    cin >> s;
    int t;
    cin >> t;
    dijkstra(s);
    while (t--)
    {
        int d;
        long long dw;
        cin >> d >> dw;
        if(dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}