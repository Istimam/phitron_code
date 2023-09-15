#include<bits/stdc++.h>
using namespace std;
// bool ans = false;
bool reach_value(long long n)
{
    if(n%10 == 0)
    {
        return true;
    }
    if(n%20 == 0)
    {
        return true;
    }
    else
    {
        return false;
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
            // long long s = -1;
            // ans = false;
            // reach_value(n);
            if(reach_value(n))
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