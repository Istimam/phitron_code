#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    // scanf("%s %s",s,t);
    gets(s);
    gets(t);
    int sst= strlen(s);
    int stt=strlen(t);
    printf("%d %d\n",sst,stt);
    printf("%s %s",s,t);
    return 0;
}