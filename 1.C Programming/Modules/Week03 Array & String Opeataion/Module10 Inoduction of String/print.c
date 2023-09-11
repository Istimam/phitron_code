#include<stdio.h>
int main()
{
    char a[6]="Rahat";
    int sz=sizeof(a)/sizeof(char);
    printf("%s\n",a);
    printf("%d\n",sz);
    return 0;
}