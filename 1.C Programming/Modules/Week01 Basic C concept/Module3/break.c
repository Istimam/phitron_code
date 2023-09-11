#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i=i+1)
    {
      if (i % 2 == 0 )
       {
        printf("%d even\n",i);
       }
        if (i==10)
       {
        break;
       }
       else
       {
        printf("%d odd\n",i);
       }
       
    }
    
    
    
    return 0;

}