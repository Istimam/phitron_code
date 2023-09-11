#include<stdio.h>
long long int factorial(int x)
{
    if(x==0)
    {
        return 1;
    }
    long long int fact= factorial(x-1);
    return fact*x;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int ans = factorial(n);
    // int ans=1;
    // for(int i=1;i<=n;i++)
    // {
    //    ans=ans*i;
    // }
    printf("%lld\n",ans);
    return 0;
}