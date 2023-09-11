#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int dp[N][N];
int knapsack(int n,int w[],int v[],int s)
{
    if(n == 0 || s == 0)
    {
        return 0;
    }
    // if(dp[n][s] != -1)
    // {
    //     return dp[n][s];
    // }
    if(w[n-1] <= s)
    {
        // return dp[n][s] = max(knapsack(n - 1, w, v, s - w[n - 1]) + v[n-1], knapsack(n-1, w, v, s));
        return max(knapsack(n - 1, w, v, s - w[n - 1]) + v[n-1], knapsack(n-1, w, v, s));
    }
    else
    {
        // return dp[n][s] = knapsack(n - 1, w, v, s);
        return knapsack(n - 1, w, v, s);
    }
}
int main()
{
    int n, s;
    cin >> n >> s;
    int w[n], v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }
    // for (int i = 0; i <= N; i++)
    // {
    //     for (int j = 0; j <= N; j++)
    //     {
    //         dp[i][j] = -1;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //         cout << w[i] << " " << v[i] << endl;
    // }
  
    
    cout << knapsack(n, w, v, s);
    return 0;
}