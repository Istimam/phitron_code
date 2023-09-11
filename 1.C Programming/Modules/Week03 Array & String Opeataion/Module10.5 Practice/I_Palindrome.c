// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1001];

//     fgets(s,sizeof(s),stdin);
//     int is_palindrome=1;

//     int i=0, j=strlen(s)-1;
//     while(i<j)
//     {
//         if (s[i]==s[j])
//         {
//             i++;
//             j--;
//         }
//         else{
//             is_palindrome=0;
//             break;
//         }
//     }

//     if (is_palindrome==1)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int i=0,j=strlen(s)-1;
    int com=0;
    while (i<j)    
    {
        if(s[i] != s[j])
        {
            com++;
        }
        i++;
        j--;
    }
    if(com!=0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }   
    return 0;
}

// Time limit Exeeds
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ar[1001];
//     scanf("%s",ar);
//     int strl=strlen(ar);
//     char arr[strl+1];
//     for(int i=0;i<strl;i++)
//     {   
        
//         arr[i] = ar[strl-i-1];
         
//     }
//     int count=0;
//     arr[strl]='\0';
//     // rearrange all elements into new array
//     for(int i=0;i<strl;i++)
//     {
//         if(arr[i]==ar[i])
//         {
//             count++;
//         }

//     }
//     // print if count==strl
//     if(count==strl)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }   
// }