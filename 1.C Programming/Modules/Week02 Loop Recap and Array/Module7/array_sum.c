#include<stdio.h>
int main()
{
    int j,n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
    return 0;
}