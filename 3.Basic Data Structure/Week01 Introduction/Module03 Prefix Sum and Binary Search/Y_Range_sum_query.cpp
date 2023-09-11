#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n>>q;
    long long int a[n],pre[n];
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        pre[i]=sum;
    }
    /*Brute force TLE*/
    // while (q--) //O(q*r)
    // {
    //     int l,r;
    //     cin>>l>>r;
    //     l--;
    //     r--;
    //     int sum=0;
    //     for (int i = l; i <= r; i++)
    //     {
    //         sum+=a[i];
    //     }
    //     cout<<sum<<endl;
    // }
    /*Optimize by using prefix*/
    while (q--)
    {
        long long int l,r,sum=0;
        cin>>l>>r;
        l--;
        r--;
        if(l==0)
        {
            cout<<pre[r]<<endl;
        }
        else
        {
            sum = pre[r] - pre[l-1];
            cout<<sum<<endl; 
        }
    }
    return 0;
}