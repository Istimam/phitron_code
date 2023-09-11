#include<stdio.h>
int find_a_value(int *p,int x,int found)
{
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(*(p+i)==found)
        {
            count=1;
        }
    }
    return count;
}
int main()
{
    int n,f;
    scanf("%d %d",&n,&f);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    find_a_value(arr,n,f);
    int finding_the_value=find_a_value(arr,n,f);
    if(finding_the_value==0)
    {
        printf("Not Found.\n");
    }
    else
    {
        printf("Found it.\n");
    }
    return 0;
}