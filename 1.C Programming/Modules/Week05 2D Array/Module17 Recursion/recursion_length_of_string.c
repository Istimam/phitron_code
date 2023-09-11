#include<stdio.h>
int fun(char str[],int i)
{
    if(str[i]=='\0') return 0;
    int l=fun(str,i+1);
    return l+1;
}
int main()
{
    char s[100000];
    scanf("%s",&s);
    int length = fun(s,0);
    printf("%d\n",length);
    return 0;
}