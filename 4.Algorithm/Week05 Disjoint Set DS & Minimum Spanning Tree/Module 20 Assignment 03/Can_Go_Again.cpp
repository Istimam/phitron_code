#include<bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long int u;
    long long int v;
    long long int w;
    Edge(long long int u, long long int v, long long int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    long long int n, e;
    cin >> n >> e;
    vector<Edge> v;

    while (e--)
    {
        long long int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }

    long long int dis[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    long long int s;
    cin >> s;

    dis[s] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            long long int a = ed.u;
            long long int b = ed.v;
            long long int w = ed.w;
            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }

    bool cycle = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            long long int a = ed.u;
            long long int b = ed.v;
            long long int w = ed.w;
            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
            {
                cycle = true;
                break;
            }
        }
    }


    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        long long int t;
        cin >> t;
        while (t--)
        {
            long long int d;
            cin >> d;
            if (dis[d] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}
