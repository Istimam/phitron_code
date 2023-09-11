#include<stdio.h>
void print(int x)
{
    if(x==0) return;
    print(x-1);
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}