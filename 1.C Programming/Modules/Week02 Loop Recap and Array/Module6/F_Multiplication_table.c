#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=12;i++)
    {
        // int mul=a*i;
        // printf("%d * %d = %d\n",a,i,mul);
        printf("%d * %d = %d\n",a,i,i*a);
    }
    return 0;
}