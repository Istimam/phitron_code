// #include <stdio.h>

// int main() {
//     char space = ' '; // Space character
//     int asciiValue = (int) space; // Convert char to int to get ASCII value

//     printf("'%d'", asciiValue);

//     return 0;
// }
#include<stdio.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }

        else if (s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }

        if(s[i]==',')
        {
            s[i]=s[i]-12;
        }
    printf("%c",s[i]);
    }

    return 0;
}
