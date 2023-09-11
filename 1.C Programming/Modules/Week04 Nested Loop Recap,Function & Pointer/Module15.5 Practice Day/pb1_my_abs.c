#include<stdio.h>
int my_abs(int x)
{
    if(x<0)
    {
        x=x*(-1);
    }
    return x;
}
int main()
{
    int a;
    scanf("%d",&a);
    int abs=my_abs(a);
    printf("%d",abs);
    return 0;
}