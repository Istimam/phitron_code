#include<stdio.h>
long long int sum(long long int arr[], int x)
{
    if(x<0)
    {
        return 0;
    }
    long long int ans=sum(arr,x-1);
    return ans+arr[x];
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int s = sum(a,n-1);
    printf("%lld",s);
    return 0;
}