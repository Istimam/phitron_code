#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n-1;
    for(int i=1;i<=(n*2)-1;i=i+2)
    {
            for(int j=1;j<=k;j++)
            {
                printf(" ");
            }
            k--;
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
    }
    k=0;
    for (int i=(n*2)-1;i>0;i=i-2)
    {
        for(int j=1;j<=k;j++)
        {
            printf(" ");
        }
        k++;
        for(int j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}