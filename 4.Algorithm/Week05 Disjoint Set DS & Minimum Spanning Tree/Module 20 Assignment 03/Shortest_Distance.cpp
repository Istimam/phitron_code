#include<bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<long long int>> dis(n + 1, vector<long long int>(n + 1, INF));
    for (int i = 0; i <= n; i++) 
    {
        dis[i][i] = 0;
    }
    while (e--) 
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        if (dis[a][b] > w) 
        {
            dis[a][b] = w;
        }
    }
    for (int k = 1; k <= n; k++) 
    {
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= n; j++) 
            {
                if (dis[i][k] != INF && dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j]) 
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int t;
    cin >> t;
    while (t--) 
    {
        int s, d;
        cin >> s >> d;
        if (s < 1 || s > n || d < 1 || d > n || dis[s][d] == INF) 
        {
            cout << "-1" << endl;
        }
        else 
        {
            cout << dis[s][d] << endl;
        }
    }
    return 0;
}
