#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>='A' && X<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(X>='a' && X<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}
