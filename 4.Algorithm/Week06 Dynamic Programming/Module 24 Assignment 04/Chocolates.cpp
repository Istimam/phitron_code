#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int dp[N][N];
bool sum_of_subset(int s,int a[],int n)
{
    if(n == 0)
    {
        if(s == 0)
        {
            return true;
        }
        return false;
    }
    if(dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if(a[n - 1] <= s)
    {
        bool op1 = sum_of_subset(s - a[n - 1], a, n - 1);
        bool op2 = sum_of_subset(s, a, n - 1);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = sum_of_subset(s, a, n - 1);
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if(s%2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            s = s/2;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    dp[i][j] = -1;
                }
            }
            bool ans = sum_of_subset(s, a, n);
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