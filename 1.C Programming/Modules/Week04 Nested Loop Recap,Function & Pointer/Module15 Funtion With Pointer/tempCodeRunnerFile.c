#include<stdio.h>
void fun(int *ar,int n)
{
    ar[0]=500;
    //  for(int i=0;i<5;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
}
int main()
{
    int ar[5]={4,3,2,5,3};
    fun(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}