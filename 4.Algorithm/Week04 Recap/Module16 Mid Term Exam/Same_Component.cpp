#include<bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e3 + 5;
bool vis[N][N];
int dis[N][N];
typedef pair<int, int> pii;
vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int cI,int cJ)
{
    if(cI>=0 && cI<n && cJ>=0 && cJ<m)
        return true;
        else
        return false;
}
void bfs(int si,int sj,int di,int dj)
{
    queue<pii> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pii parent = q.front();
        q.pop();
        int pI = parent.first;
        int pJ = parent.second;

        for (int i = 0; i < 4; i++)
        {
            pii p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;
            if(isValid(cI,cJ) && !vis[cI][cJ])
            {
                vis[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;
            }
        }
        
    }
    
}
int main()
{

    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char d;
            cin >> d;
            if(d == '.')
            {
                mat[i][j] = 1;
            }
            else if('-')
            {
                mat[i][j] = 0;
            }
        }   
    }
    int si, sj;
        cin >> si >> sj;
    int di, dj;
        cin >> di >> dj;
        bfs(si, sj, di, dj);
        for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}