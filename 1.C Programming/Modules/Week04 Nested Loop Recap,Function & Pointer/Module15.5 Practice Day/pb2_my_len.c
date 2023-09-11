#include<stdio.h>
#include<string.h>
int my_len(char string[],int i)
{

    if(string[i]=='\0') return i;
    my_len(string,i+1);

}
int main()
{
    char s[1000];
    scanf("%s",s);
    int i=my_len(s,0);
    printf("%d",i);
    return 0;
}