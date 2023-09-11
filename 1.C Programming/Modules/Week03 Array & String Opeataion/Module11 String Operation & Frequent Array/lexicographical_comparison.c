#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v = strcmp(a,b); // a>b = -1 <0(same) < 1=a<b;
    
    if(v==0)
    {
        printf("Same");
    }
    else if (v<0)
    {
        printf("A string choto");
    }
    else
    {
        printf("B string choto");
    }
    
    return 0;
}


// String strcmp function Explain


// #include<stdio.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     int i=0;
//     while(1)
//     {
//         if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("Same\n");
//             break;
//         }
//         else if(a[i]=='\0')
//         {
//             printf("A string choto\n");
//             break;
//         }
//         else if (b[i]=='\0')
//         {
//             printf("B string choto\n");
//             break;
//         }

//         if(a[i]==b[i])
//         {
//             i++;
//         }
//         else if (a[i]<b[i])
//         {
//             printf("A string choto");
//             break;
//         }
//         else
//         {
//             printf("B string choto");
//             break;
//         }
//     }
//     return 0;
// }