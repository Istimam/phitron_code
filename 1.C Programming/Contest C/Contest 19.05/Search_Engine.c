#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k = 1; k <= t; k++)
    {
        int n,s;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int count=0;
        scanf("%d",&s);
        for(int i=0 ; i<n;i++)
        {
            if(arr[i]==s)
            {
                count=count+(i+1);
                break;
            }
        }
        if(count!=0)
        {
            printf("Case %d: %d\n",k,count);
        }
        else
        {
            printf("Case %d: Not Found\n",k);
        }
    }
    
    return 0;
}