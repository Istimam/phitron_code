#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    fgets(s, sizeof(s), stdin);
    // scanf("%s",&s);
    int sum=0;
    // int i=0;
    // for(int i=0;i<strlen(s);i++)
    for(int i=0;s[i]!='\0';i++)
    // {
        // if(s[i]>='0' && s[i]<='9')
        {
            sum+=(s[i]-'0');
        }


    // }
    // while (s[i] != '\0')
    // {
    //     sum+=(s[i]-'0');
    //     i++;
    // }
    
    printf("%d",sum);
    return 0;
}