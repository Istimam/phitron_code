#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    long long int a[n],pre[n];
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        pre[i]=sum;
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout<<pre[i]<<" ";
    } 
    return 0;
}