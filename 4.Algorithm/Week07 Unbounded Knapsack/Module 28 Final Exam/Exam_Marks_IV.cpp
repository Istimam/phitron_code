#include<bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        s = 1000 - s;
        // int s = 1000 - s;
        int dp[n + 1][s + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if(v[i-1] <= j)
                {
                    dp[i][j] = (dp[i][j - v[i - 1]] %m + dp[i - 1][j]%m)%m;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j]%m;
                }
            } 
        }
        cout << dp[n][s] << endl;
        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= s; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
    }
    return 0;
}