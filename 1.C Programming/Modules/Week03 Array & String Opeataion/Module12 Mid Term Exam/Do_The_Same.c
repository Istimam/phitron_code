#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    for(int j=0;j<b;j++)
    {
            for(int i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    }


    return 0;
}