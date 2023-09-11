#include<stdio.h>
#include<string.h>
int main()
{
    int b;
    scanf("%d",&b);
    char s[1000001];
    scanf("%s",s);
    int sum=0;
    for(int i=0;i<strlen(s);i++)
    {
       int v=s[i]-'0';
       sum=sum+v;
    }
    
    printf("%d",sum);

    return 0;
}
