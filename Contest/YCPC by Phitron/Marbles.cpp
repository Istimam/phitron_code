#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        for (int i = a; i <= b; i++)
        {
            arr[i] = arr[i] + x;
        }
    }
    for(int a:arr)
    {
        cout << a << " ";
    }
    return 0;
}