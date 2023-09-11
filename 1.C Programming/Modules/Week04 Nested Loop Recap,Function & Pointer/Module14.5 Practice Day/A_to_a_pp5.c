/*NO Return + paramwter */
#include<stdio.h>
void small_to_capital(char c)
{
    if(c>='A' || c<='Z')
    {
        char convert;
        convert=c+32;
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