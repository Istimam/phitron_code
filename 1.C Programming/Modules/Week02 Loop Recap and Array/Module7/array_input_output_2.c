#include<stdio.h>
int main()
{
    int ar[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d\n",&ar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("ar[%d]\n",ar[i]);
    }
    return 0;
}