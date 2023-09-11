#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1,num=1;
    for(int i=1;i<=(5*2)-1;i++)
    {
        for(int j=space;j>0;j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= num; k++)
        {
            printf("%d",k);
        }
        printf("\n");

        if(i<n)
        {
            num=num+2;
            space--;
        }  
        if(i>=n)
        {
            num=num-2;
            space++;

        }
        
    }
    return 0;
}