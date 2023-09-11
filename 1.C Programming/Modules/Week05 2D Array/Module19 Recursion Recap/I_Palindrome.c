#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002];
    scanf("%s",&s);
    char t[1002];
    strcpy(t,s);
    int strl=strlen(s);
    int i=0,j=strl-1,flag=0;
    while (i<j)
    {
        if(s[i]!=t[j])
        {
            flag++;
        }
        i++;
        j--;
    }
    if(flag!=0)
    {
        printf("NO\n");
    }
    else
    {

        printf("YES\n");
    }
    return 0;
}