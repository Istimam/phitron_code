#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> ar[N];
int main()
{
    int n;
    cin>>n;
    n++;
    int adj[n][n];
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin>>adj[i][j];
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(adj[i][j] == 1)
            {
                ar[i].push_back(j);
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        cout<<"List "<<i<<" : ";
        for(int v:ar[i])
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}