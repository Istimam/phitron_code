#include<stdio.h>
void change_it(int arr[],int size)
{
    arr[size-1]=100;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
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
    change_it(a,n);
    return 0;
}