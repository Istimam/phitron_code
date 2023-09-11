// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {   char arr[101];
//         scanf("%s",&arr);
//         if(strlen(arr)<=10)
//         {
//             printf("%s\n",arr);
//         }
//         else
//         {
//             int strl;
//            strl= strlen(arr)-2;
//            printf("%c%d%c\n",arr[0],strl,arr[strlen(arr)-1]);
//         }
//     }
    
//     return 0;
// }

// Another way
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char ch[102];
        scanf("%s",ch);
        int size= strlen(ch);
        
        if(size>10)
        {
            printf("%c%d%c\n",ch[0], size-2, ch[size - 1]);
        }
        else
        {
            printf("%s\n",ch);
        }
    }
    return 0;
}