#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,o;
    cin>>n>>m>>o;
    // int mx=INT_MIN,mn=INT_MAX;
    int mx=max(m,n);
    mx=max(mx,o);
    int mn=min(n,m);
    mn=min(mn,o);
    cout<<mn<<" "<<mx;
    
    return 0;
}