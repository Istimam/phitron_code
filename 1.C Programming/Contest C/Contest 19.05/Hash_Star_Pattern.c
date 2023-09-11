#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if ((n+1)/2==i)
        {
            for (int j = 1; j <= n; j++)
            {                
                printf("#");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if ((n+1)/2==j)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }     
            }
            printf("\n");
        }
    }
    
    return 0;
}