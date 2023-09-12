#include<bits/stdc++.h>
using namespace std;
bool ans = false;
void reach_value(long long n,long long s)
{
    // cout << "s";
    if(s <= n)
    {
        if(s == n)
        {
            ans = true;
        }
        reach_value(n, s * 10);
        reach_value(n, s * 20);
        // return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if(n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            long long s = 1;
            ans = false;
            reach_value(n, s);
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