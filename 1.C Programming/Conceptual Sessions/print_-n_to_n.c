#include<stdio.h>
void times(int x)
{
    if(x<0) return x;
    printf("%d ",x);
    times(x-1);
    printf("%d ",x);
    // return x-1;
}
int main()
{
    int n;
    scanf("%d",&n);
    times(n);
    return 0;
}
// #include<stdio.h>
// void print(int x,int t)
// {
//     if(x<0) return 0;
//     printf("%d ",t);
//     // if (t<0)
//     // {
//         print(x-1,t+1);
//     // }
//     // else
//     // print(x-1,t-1);
    
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n<0)
//     {
//         print(n*(-2),n);
//     }
//     else
//     {
//         print(n*2,n);
//     }
//     return 0;
// }