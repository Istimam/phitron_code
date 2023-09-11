#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        if(i != 0)
        {
            cin>>v[i];
            long long int sum = v[i] + v[i-1];
            v[i] = sum;
        }
        else
        {
            cin>>v[i];
        }
    }
    while(m--)
    {
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l != 0)
        {
            long long int sum = v[r] - v[l-1];
            cout<<sum<<endl;
        }
        else cout<<v[r]<<endl;
    }
    return 0;
}