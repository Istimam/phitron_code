#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n,int v[],int w[],int m)
{
    if(n == 0 || m == 0)
    {
        return 0;
    }
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if(w[n-1] <= m)
    {
        int op1 = unbounded_knapsack(n, v, w, m - w[n - 1]) + v[n - 1];
        int op2 = unbounded_knapsack(n - 1, v, w, m);
        return dp[n][m] = max(op1,op2);
        // return max(op1,op2);
    }
    else
    {
        // return unbounded_knapsack(n - 1, v, w, m);
        return dp[n][m] = unbounded_knapsack(n - 1, v, w, m);
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    int v[n],w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<unbounded_knapsack(n, v, w, m)<<endl;
    return 0;
}