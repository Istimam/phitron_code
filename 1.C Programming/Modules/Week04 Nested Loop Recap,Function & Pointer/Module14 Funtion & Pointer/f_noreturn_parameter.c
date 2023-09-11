#include<stdio.h>

void sum(int x,int y)
{
    int s=x+y;
    // return s; likhte parbo na
    // jehetu main e value pathate parbo na tai ekhanei print ker daw
    printf("%d",s);
}
int main()
{
    // tahole ekhane input nite pari
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}