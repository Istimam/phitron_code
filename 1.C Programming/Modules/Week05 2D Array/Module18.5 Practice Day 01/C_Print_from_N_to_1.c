#include<stdio.h>
void reverse_print(int x)
{
    if(x==0) return;
    if(x>1)
    {
        printf("%d ",x);
    }
    if(x==1)
    {
        printf("%d",x);
    }
    reverse_print(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    reverse_print(n);
    return 0;
}