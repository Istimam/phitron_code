#include<stdio.h>
void even_indices(int arr[],int x)
{
    if(x<0) return;
    if(x%2==0)
    {
        printf("%d ",arr[x]);
    }
    even_indices(arr,x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    even_indices(a,n-1);
    return 0;
}