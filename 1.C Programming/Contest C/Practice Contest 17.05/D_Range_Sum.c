#include<stdio.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    for(int k=1;k<=t;k++)
    {
        long long int n,m,sum=0;
        scanf("%lld %lld",&n,&m);
        for(int i=n;i<=m;i++)
        {
            sum=sum+i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}