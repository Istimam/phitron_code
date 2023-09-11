#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a,x;
    cin>>x;
    a = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}