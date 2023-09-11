#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int dp[N][N];
int unbounded_knapsack(int n,int v[],int w[],int s)
{
    if(n == 0 || s == 0)
    {
        return 0;
    }
    if(dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if(w[n-1] <= s)
    {
        return dp[n][s] = max(unbounded_knapsack(n, v, w, s - w[n - 1]) + v[n - 1], unbounded_knapsack(n-1, v, w, s));
    }
    else
    {
        return dp[n][s] = unbounded_knapsack(n-1, v, w, s);
    }
}
int main()
{
    int n;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        w[i] = 1 + i;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
        
    }
    
    cout << unbounded_knapsack(n, v, w, n)<<endl;
    return 0;
}