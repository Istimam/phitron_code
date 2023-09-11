#include<stdio.h>
int main()
{
    int a,mod;
    scanf("%d",&a);
    if(a>=0)
    {
        if(a%2==0)
        printf("even");
        else
        printf("odd");
    }
    else
        printf("Take a non integer.");
    return 0;
}