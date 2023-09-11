#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 105;
const int I = 1e9 + 5;
vector<pii> path = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u, v;
        cin >> u >> v;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;

        vector<vector<int>> dist(u, vector<int>(v, I));
        dist[ki][kj] = 0;

        queue<pii> q;
        q.push({ki, kj});

        while (!q.empty())
        {
            pii curr = q.front();
            q.pop();

            int s = curr.first;
            int t = curr.second;

            for (auto p : path)
            {
                int pi = s + p.first;
                int py = t + p.second;
                
                if (pi >= 0 && pi < u && py >= 0 && py < v && dist[pi][py] == I)
                {
                    dist[pi][py] = dist[s][t] + 1;
                    q.push({pi, py});
                }
            }
        }

        if (dist[qi][qj] == I)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[qi][qj] << endl;
        }
    }

    return 0;
}
