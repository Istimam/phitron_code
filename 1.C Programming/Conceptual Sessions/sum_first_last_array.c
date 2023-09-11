#include<stdio.h>
int sum_first_last_array(int f[],int n)
{
    if (n<0) return 0;
    sum_first_last_array(f,n-1);
    int sum=f[n]+f[0];
    return sum;
}
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&arr[i]);
    }
   
    
    int value = sum_first_last_array(arr,x-1);
    printf("%d",value);
    return 0;
}