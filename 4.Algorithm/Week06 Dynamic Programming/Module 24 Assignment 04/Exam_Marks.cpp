#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool target_num(int n,int val,int a[])
{
    if(n == 0)
    {
        if(val == 0)
            return true;
        else
            return false;
    }
    if(dp[n][val] != -1)
        {
        return dp[n][val];
        }
    if(a[n-1] <= val)
    {
        bool op1 = target_num(n - 1, val - a[n - 1], a);
        bool op2 = target_num(n - 1, val, a);
        return dp[n][val] = op1 || op2;
    }
    else
    {
        return dp[n][val] = target_num(n - 1, val, a);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n >> num;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(num == 1000)
        {
            cout << "YES" << endl;
        }
        else
        {
            for(int i=0;i<1005;i++)
                {
                for(int j=0;j<1005;j++)
                    {
                    dp[i][j]= -1;
                    }
                }
            int val = 1000 - num;
            bool target = target_num(n, val, a);
            if(target)
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