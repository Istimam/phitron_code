#include<stdio.h>
int main()
{
    int e,m,b,i;
    scanf("%d %d %d",&e,&m,&b);
    if(e>=1 && m>=1 && b>=1)
    { 
        do
        {
            e=e-1; m=m-1; b=b-1;
            
        }
        while (e==0 || m==0 || b==0);
        {
            printf("%d %d %d",e,m,b);
        }
        
        
        
        
        
    }
    return 0;
}