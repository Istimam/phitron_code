#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    int flag=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            flag = 0;
        }
    }
    if(flag == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    return 0;
}