#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int dp[N][N];
bool ans = false;
int unbounded(int n,int v[],int s)
{
    // cout << n << " " << s << endl;
    if(n == 0)
    {
        return 0;
    }
    if(s == 0)
    {
        ans = true;
    }
    if(dp[n][s] != -1)
    {
        return dp[n][s];
    }  
    if(v[n-1] <= s)
    {
        return dp[n][s] = max(unbounded(n, v, s - v[n - 1]), unbounded(n - 1, v, s));
    }
    else
    {
        return dp[n][s] = unbounded(n - 1, v, s);
    }
}
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
        if(s == 1000)
        {
            cout << "YES" << endl;
        }
        else
        {
            s = 1000 - s;
            // cout << s << endl;
            memset(dp, -1, sizeof(dp));
            ans = false;
            unbounded(n, v, s);
            if(ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}