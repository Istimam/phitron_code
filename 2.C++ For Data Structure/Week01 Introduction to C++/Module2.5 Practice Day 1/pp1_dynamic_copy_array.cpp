#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *ar1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar1[i];
    }
    int m;
    cin>>m;
    int *ar3 = new int[m];
    for (int i = 0; i < m; i++)
    {
        ar3[i]=ar1[i];
    }
    delete[] ar1;

    for (int i = n; i < m; i++)
    {
        cin>>ar3[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout<<ar3[i]<<" ";
    }
    
    
    return 0;
}