#include<stdio.h>
int main()
{
    int a,digit;
    scanf("%d",&a);
    if(a>999 && a<=9999)
    {
        digit=a/1000;
        if(digit%2==0)
        {
         printf("EVEN");
        }
        else
        {
            printf("ODD");
        }

    }
    return 0;
}
