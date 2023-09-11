#include<stdio.h>
void swap_it(int *i,int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
    printf("%d %d",*i,*j);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    swap_it(&n,&m);
    // printf("%d %d",n,m);
    return 0;
}