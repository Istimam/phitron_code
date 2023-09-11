#include<stdio.h>
void print_numbers(int x)
{
    if(x==0) return;
    print_numbers(x-1);
    printf("%d\n",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    print_numbers(n);
    return 0;
}