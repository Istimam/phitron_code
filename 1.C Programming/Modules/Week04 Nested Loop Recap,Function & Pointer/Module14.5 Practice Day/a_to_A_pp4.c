#include<stdio.h>
char small_to_capital(char c)
{
    if(c>='a' || c<='z')
    {
        char convert;
        convert=c-32;
        printf("%c",convert);
    }
}
int main()
{
    char a;
    scanf("%c",&a);
    small_to_capital(a);
    return 0;
}