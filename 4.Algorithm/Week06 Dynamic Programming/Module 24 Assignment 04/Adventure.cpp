#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int n,int w[],int v[],int maxx)
{
    if(n == 0)
    {
        return 0;
    }
    if(maxx == 0)
    {
        return 0;
    }
    if(dp[n][maxx] != -1)
    {
        return dp[n][maxx];
    }
    if(w[n-1] <= maxx)
    {
        int op1 = knapsack(n - 1, w, v, maxx - w[n - 1]) + v[n - 1];
        int op2 = knapsack(n - 1, w, v, maxx);
        return dp[n][maxx] = max(op1, op2);
        // return max(op1, op2);
    }
    else
    {
        return dp[n][maxx] = knapsack(n - 1, w, v, maxx);
        // return knapsack(n - 1, w, v, maxx);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxx;
        cin >> n >> maxx;
        int w[n],v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < 1005; i++)
        {
            for (int j = 0; j < 1005; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n, w, v, maxx) << endl;
    }
    return 0;
}