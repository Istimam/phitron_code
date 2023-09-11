#include<stdio.h>
int count_before_zero(int *p,int x)
{
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(*(p+i)!=0)
        {
            count++;

        }
        if(*(p+i)==0)
        {
            return count;
        }
    }
    // return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int t=count_before_zero(arr,n);
    printf("%d",t);

    return 0;
}