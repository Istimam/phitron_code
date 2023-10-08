#include<bits/stdc++.h>
using namespace std;
long long nCr(long long n,long long r)
{
    if(r == 0 || n == r)
    {
        return 1;
    }
    if(n-r > r)
    {
        r = n - r;
    }
    long long result = nCr(n - 1, r - 1);
    result = result * n / r;
    return result;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}