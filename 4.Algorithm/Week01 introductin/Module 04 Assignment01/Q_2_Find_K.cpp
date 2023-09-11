#include<bits/stdc++.h>
using namespace std;
const int n=1e5+7;
int nums[n];
void mergesort(int l, int r,int x)
{
    if(l > r) 
    {
        cout<<"Not Found"<<endl;
        return;
    }
    int mid = (l+r)/2;
    if(nums[mid] == x)
    {
        cout<<mid<<endl;
    }
    else if(x > nums[mid])
    {
        mergesort(mid+1,r,x);
    }
    else if(x < nums[mid])
    {
        mergesort(l,mid-1,x);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>nums[i];
    }
    int x;
    cin>>x;
    mergesort(0,n-1,x);
    // sort(nums,nums+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
    return 0;
}