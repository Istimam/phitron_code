// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         while (n != 1)
//         {   
//             if(n < 1)
//             {
//                 break;
//             }
//             if(n%2 == 0)
//             {
//                 n = n / 2;
//             }
//             else if(n%2 != 0)
//             {
//                 n = n - 3;
//             }
//         }
//         if(n == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<bool> dp(n + 1, false);
        dp[1] = true;
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0) 
            {
                dp[i] = dp[i / 2];
            } 
            else if (i >= 3) 
            {
                dp[i] = dp[i - 3];
            }
        }
        if (dp[n]) 
        {
            cout << "YES" << endl;
        } else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
