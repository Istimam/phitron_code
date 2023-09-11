#include<stdio.h>
void fun(int x,int i)
{   
    if(i==x+1) return;
    printf("%d ",i);
    fun(x,i=i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    fun(n,i);
    return 0;
}

// #include<stdio.h>
// void fun(int x,int i)
// {   
//     if(i==x+1) return;
//     printf("%d ",i);
//     fun(x,i=i+1);
// }
// int main()
// {
//     int n,i;
//     scanf("%d %d",&i,&n);
//     fun(n,i);
//     return 0;
// }