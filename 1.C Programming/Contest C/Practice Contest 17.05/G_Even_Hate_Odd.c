#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&t);
        int arr[t];
        for(int j=0;j<t;j++)
        {
            scanf("%d",&arr[j]);
        }
        int even=0,odd=0,operation=0;
        if(t%2==0)
        {
            for(int j=0;j<t;j++)
            {
                if(arr[j]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if(even==odd)
            {
                printf("0\n");
            }
            else if(even<odd)
            {
                operation=(t/2)-even;
                printf("%d\n",operation);
            }
            else if (even>odd)
            {
                operation=(t/2)-odd;
                printf("%d\n",operation);
            }
            else if (even==odd)
            {
                operation=t-(t/2);
                printf("%d\n",operation);
            }
            
            
        }
        else
        {
            printf("-1\n");
        }    
    }
    return 0;
}