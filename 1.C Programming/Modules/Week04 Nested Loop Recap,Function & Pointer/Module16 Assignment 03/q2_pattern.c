#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1,num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=space;j>0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
        space--;

    }
    return 0;
}
