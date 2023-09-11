#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],cpy[n]={'0'};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j=n-1;
    // for (int i = n-1; i >= 0; i--)
    // {
    //     swap(arr[j],cpy[i]);
    //     j++;
    // }
    int i=0,flag=0;
    while (i<j)
    {
        if(arr[i]!=arr[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    switch (flag)
    {
    case 0:
        cout<<"YES";
        break;
    
    case 1:
        cout<<"NO";
        break;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<cpy[i]<<" ";
    // }
    return 0;
}