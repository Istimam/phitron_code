#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        // int x;
        cin>>v[i];
        // v[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        int t;
        cin>>t;
        auto it = find(v.begin(),v.end(),t);
        if(it != v.end())
        {
            cout<<"found"<<endl;
        }
        else
        cout<<"not found"<<endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}