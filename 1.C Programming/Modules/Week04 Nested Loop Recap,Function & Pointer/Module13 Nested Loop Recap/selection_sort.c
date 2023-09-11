#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d %d",&n,&s);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(s==0)
    {
        for(int i=n-1;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }        
    }

    return 0;
}