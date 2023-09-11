#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int sum_e=0,sum_o=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            sum_e=sum_e+ar[i];
        }
        else
        {
            sum_o=sum_o+ar[i];
        }        
    }
    printf("%d %d",sum_e,sum_o);
    return 0;
}