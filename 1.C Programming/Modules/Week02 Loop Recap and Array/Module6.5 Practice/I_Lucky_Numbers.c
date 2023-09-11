#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mod=n%10;
    int quo=n/10;
    if(mod%quo==0 || quo%mod==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }    
    return 0;
}