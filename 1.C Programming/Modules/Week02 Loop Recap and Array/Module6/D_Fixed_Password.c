// #include<stdio.h>
// int main()
// {
//     int a;
//     while (scanf("%d",&a) != EOF)
//     {
//         if(a==1999)
//         {
//          printf("Correct\n");
//          break;
//         }
        
//         else
//         {
//          printf("Wrong\n");
//         }
//     } 
//     return 0;
// }
#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d",&a) != EOF)
    {
        if(a%1000==999 && a/1000==1)
        {
         printf("Correct\n");
         break;
        }
        
        else
        {
         printf("Wrong\n");
        }
    } 
    return 0;
}