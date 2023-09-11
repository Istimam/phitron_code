#include<bits/stdc++.h>
using namespace std;
const int INF = 1e5 + 5;
int main()
{
    int n, e;
    cin >> n >> e;
    int dis[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= e; j++)
        {
            dis[i][j] = INF;
            if(i == j)
                dis[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }
    bool cycle = false;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(dis[i][k] != INF && dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j])
                {
                    if(i == n)
                    {
                        cycle = true;
                        break;
                    }
                    else
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    // bool cycle = false;
    // for (int k = 1; k <= n; k++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             if(dis[i][k] + dis[k][j] < dis[i][j])
    //             {
    //                 cycle = true; break;
    //                 dis[i][j] = dis[i][k] + dis[k][j];
    //             }
    //         }
    //     }
    // }
    if(cycle)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << dis[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}