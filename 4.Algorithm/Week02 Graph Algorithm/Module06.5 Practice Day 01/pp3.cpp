#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> ar[N];
int main()
{
    int n,m;
    cin>>n>>m;
    n++;
    int ar1[n][n] = {0};
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        ar[u].push_back(v);     
    }
    for (int i = 1; i < m; i++)
    {
        for(int v:ar[i])
        {
            ar1[i][v] = 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout<<ar1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}