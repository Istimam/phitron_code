#include<stdio.h>
int last_first_digit_sum(int a[])
{
    
    int sum = a[0]+a[3];
    return sum;
}
int main()
{
    int n[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&n[i]);
    }
    int sum = last_first_digit_sum(n);
    printf("%d",sum);
    return 0;
}