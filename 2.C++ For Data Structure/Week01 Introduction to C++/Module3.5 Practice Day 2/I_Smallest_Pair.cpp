#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int k = 1; k <= t; k++)
    {  
        int m;
        cin>>m;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        int my_min=INT_MAX,sum=0;
        for (int i = 0; i < m-1; i++)
        {
            for (int j = i+1; j < m; j++)
            {
                sum=arr[i]+arr[j]+j-i;
                my_min=min(my_min,sum);
            }        
        }
        cout<<my_min<<endl;
    }    
    return 0;
}