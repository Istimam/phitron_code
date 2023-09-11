#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int cnt = 0;
    sort(v.begin(),v.end());
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i]+1==v[j])
            {
                cnt++;
            }
            
        }
    }
    
    for(int s:v)
    {
        cout<<s<<" ";
    }

    cout<<endl<<cnt;
    return 0;
}