#include<stdio.h>
#include<limits.h>
int max(int a[],int x)
{
    if(x<0)
    {
        return INT_MIN;
    }
    int mx=max(a,x-1);
    if(mx<a[x])
    {
        return a[x];
        // printf("%d ",a[x]);
    }

    // else
    // {
    //     return mx;
    // }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=max(arr,n-1);
    printf("%d",m);
    return 0;
}