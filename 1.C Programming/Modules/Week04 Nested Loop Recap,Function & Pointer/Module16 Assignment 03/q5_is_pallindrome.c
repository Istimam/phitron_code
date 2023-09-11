#include<stdio.h>
#include<string.h>
int is_palindrome(char *p)
{
    int strl=strlen(p);
    int count=0,j=strl-1;
    for(int i=0;i<strl/2;i++)
    {      
        {
            if(*(p+i)==*(p+j))
            {
                count=1;
            }
            j--;
        }
        
    }
    return count;
} 
int main()
{
    char s[1001];
    scanf("%s",s);
    int check=is_palindrome(s);
    if(check==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int is_palindrome(char *p)
// {
//     int strl=strlen(p);
//     int count=0,j=strl-1;
//     for(int i=0;i<strl/2;i++)
//     {      
//         {
//             if(*(p+i)==*(p+j))
//             {
//                 count++;
//             }
//             j--;
//         }
        
//     }
//     if(count==strl/2)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// } 
// int main()
// {
//     char s[1001];
//     scanf("%s",s);
//     int check=is_palindrome(s);
//     if(check==1)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }
//     return 0;
// }