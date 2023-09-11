#include<stdio.h>
int main()
{
    long long int e,m,b,statue,i,j;
    scanf("%lld %lld %lld",&e,&m,&b);
    if (e==0 || b==0)
    {
        printf("0");
    }
    else
    {
        if (e<=m && e<=b)
        {
            statue=e;
            b=b-e;
            m=m-e;
            e=e-e;
               
            // printf("%d %d %d",e,m,b);
        }
        else if (m<=e && m<=b)
        {
            statue=m;
            e=e-m;
            b=b-m;
            m=m-m;
            
            // printf("%d %d %d",e,m,b);
        }
        else if(b<=e && b<=m)
        {
            statue=b;
            e=e-b;
            m=m-b;
            b=b-b;
            // printf("%d %d %d",e,m,b);
        }
        if(e>1 && b>0)
        {
            i=e/2;
            if(i>b)
            {
                statue+=b;
            }
            else
            {
                statue+=i;
            }
        }
    printf("%lld",statue);  
    }
     
    return 0;
}