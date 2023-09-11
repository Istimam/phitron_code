#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(m--)
    {
        int t;
        cin>>t;
        int l = 0,r = n-1,mid;
        bool flag=false;
        while (l<=r)
        {
            mid = (l+r)/2;
            if(t==v[mid])
            {
                flag = true;
                break;
            }
            else if (t > v[mid])
            {
                //dan e jaw
                l=mid+1;
            }
            else
            {
                //bam e jaw
                r=mid-1;
            }
        }
        if(flag == false)
        {
            cout<<"not found"<<endl;
        }
        else
        cout<<"found"<<endl;
    }
    
    
    return 0;
}