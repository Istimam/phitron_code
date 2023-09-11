#include<stdio.h>
void replace_given_index_value(int *p,int x,int i,int u)
{

    *(p+i)=u;
    for(int i=0;i<x;i++)
    {
        printf("%d ",*(p+i));
    }
    
}

int main()
{
    int n,f,v;
    scanf("%d %d %d",&n,&f,&v);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    replace_given_index_value(arr,n,f,v);
    return 0;
}