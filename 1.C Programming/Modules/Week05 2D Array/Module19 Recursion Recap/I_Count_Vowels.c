#include<stdio.h>
int vowel_count(char str[],int i)
{
    if(str[i]=='\0') 
    {
        return 0;
    }
    int ans=vowel_count(str,i+1);
    if(str[i]>='A' && str[i]<='Z')
    {
        str[i]=str[i]+32;
    }
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char s[202];
    fgets(s,202,stdin);
    int count = vowel_count(s,0);
    printf("%d\n",count);
    return 0;
}