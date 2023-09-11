#include<stdio.h>
#include<string.h>
int main()
{
    char a[22],b[22];
    scanf("%s",a);
    scanf("%s",b);
    int v=strcmp(a,b);
    if(v>0)
    {
        printf("%s\n",b);
    }
    else if (v<0)
    {
        printf("%s\n",a);
    }
    else
    {
        printf("%s\n",b);
    }
    
    return 0;
}