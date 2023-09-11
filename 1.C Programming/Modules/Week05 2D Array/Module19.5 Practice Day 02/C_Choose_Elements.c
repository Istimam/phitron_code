#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d\n",&n,&k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                long long int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]>0)
        
        {

        sum=sum+arr[i];
        }
    }
    printf("%lld",sum);
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    return 0;
}