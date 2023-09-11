#include<stdio.h>
int main()
{
   char a,next;
   scanf("%c",&a);
   
   if(a==122)
   {
    next=a-25;
    printf("%c",next);
   }
   else
   {
    next=a+1;
    printf("%c",next);
   }
  

    return 0;
}