#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
        else if(i%1==1)
        {
            printf("-1");
        }
    }

    return 0;
}
