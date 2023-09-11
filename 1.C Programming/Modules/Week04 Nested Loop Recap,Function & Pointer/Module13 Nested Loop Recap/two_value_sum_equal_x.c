#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int flag=0;
    for(int i=0;i<n;i++)
    {
        // for(int j=1;j<n;j++)
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }    
    return 0;
}