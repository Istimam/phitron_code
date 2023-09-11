#include<stdio.h>
int main()
{
    char n;
    int cnt[26]={0};
    while (scanf("%c",&n)!=EOF)
    {
        int value=n-'a';
        if(cnt[value]==0)
        {
            printf("%c",n);
        }
        cnt[value]++;
    }
    return 0;
}