#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 5;
int dp[maxN];
int dpBottom[maxN];

int canReachN(int N)
{
    if (N < 1)
    {
        return 0;
    }
    if (N == 1)
    {
        return 1;
    }

    // already memoized
    if (dp[N] != -1)
    {
        return dp[N];
    }
    
    if (N % 2 == 0)
    {
        if (canReachN(N / 2) == 1)
        {
            // return 1;
            return dp[N] = 1;
        }
    }
    if (canReachN(N - 3) == 1)
    {
        // return 1;
        return dp[N] = 1;
    }

    // return 0;
    return dp[N] = 0;
}

int topDownApproach(int N)
{
    return canReachN(N);
}

bool canReachNByBottomUp(int N)
{
    dpBottom[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        dpBottom[i] = 0;
        
        if (i % 2 == 0)
        {
            dpBottom[i] = dpBottom[i / 2];
        }
        
        if (i >= 3)
        {
            dpBottom[i] |= dpBottom[i - 3];
        }
    }

    return dpBottom[N];
}

bool bottomUpApproach(int N)
{
    return canReachNByBottomUp(N);
}

int main()
{
    int T;
    cin >> T;

    memset(dp, -1, sizeof(dp));

    while (T--)
    {
        int N;
        cin >> N;
        // int result = canReachN(N);
        // int result = topDownApproach(N);
        bool result = bottomUpApproach(N);
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}