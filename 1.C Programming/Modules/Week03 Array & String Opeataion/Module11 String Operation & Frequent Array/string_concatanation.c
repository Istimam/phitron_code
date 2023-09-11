#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[50];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s %s",a,b);

    return 0;
}

// strcat function Logic

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[50];
//     scanf("%s %s",a,b);
//     int str= strlen(a);

//     for(int i=0;i<strlen(b);i++)
//     {
//         a[str]=b[i];
//         str++;
//     }
//     
//     a[str]='\0'; //pura string copy korle null deya lage na
//     
//     printf("%s %s",a,b);
//     return 0;
// }