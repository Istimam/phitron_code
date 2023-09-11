#include<stdio.h>
int count_odd(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            count++;
        }

    }
    return count;
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
    int odd_num=count_odd(a,n);
    printf("%d",odd_num);
    return 0;
}