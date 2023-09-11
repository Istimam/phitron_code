#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);

    int small=0,capital=0;
    {
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                small++;
            }
            if(a[i]>='A' && a[i]<='Z')
           
            {
                capital++;
            }
        }
        printf("%d %d",capital,small);
    }
    return 0;
}