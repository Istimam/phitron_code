#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    // int sz=sizeof(ar)/sizeof(char);
    printf("%d",strlen(ar));
    /*ekhan theke return krle pura array ta dlete hye jabe onle n[0 jabe]*/
    // char n[]="world";
    // return n;
}
int main()
{
    char ar[20]="hello";
    fun(ar);
    return 0;
}